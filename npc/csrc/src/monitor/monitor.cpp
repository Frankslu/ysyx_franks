#include <stdio.h>
#include <getopt.h>
#include "common.h"

static char *npc_log_file = NULL;
static char *diff_so_file = NULL;
static char *elf_file = NULL;
static char *img_file = NULL;
static bool batch_mode = false;

void set_batch_mode();
void init_rand();
void init_log(const char *log_file);
void init_mem();
int  load_img();
void init_difftest(const char *diff_so_file, int img_size);
void init_sdb();
void init_trace();

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
	{"batch"    , no_argument      , NULL, 'b'},
	{"log"      , required_argument, NULL, 'l'},
	{"diff"     , required_argument, NULL, 'd'},
	{"help"     , no_argument      , NULL, 'h'},
	{"elf"      , required_argument, NULL, 'e'},
	{0          , 0                , NULL,  0 },
  };
  volatile int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:e:", table, NULL)) != -1) {
	switch (o) {
	  case 'b': set_batch_mode(); break;
	  case 'l': npc_log_file = optarg; break;
	  case 'd': diff_so_file = optarg; break;
	  case 'e': elf_file = optarg; break;
	  case 1: img_file = optarg; return 1;
	  default:
		printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
		printf("\t-b,--batch              run with batch mode\n");
		printf("\t-l,--log=FILE           output log to FILE\n");
		printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
		printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
		printf("\t-e,--elf=ELF_FILE       READ ELF FILE");
		printf("\n");
		exit(0);
	}
  }
  return 0;
}

void set_batch_mode(){
	batch_mode = true;
}

bool is_batch_mode(){
	return batch_mode;
}



void init_monitor(int argc, char *argv[]){
	__attribute__((unused)) int i;
	i = parse_args(argc, argv);

	/* Set random seed. */
	init_rand();

	/* Open the log file. */
	init_log(npc_log_file);

	/* Initialize memory. */
	init_mem();

	/* Initialize devices. */
	IFDEF(CONFIG_DEVICE, init_device());

	/* Load the image to memory. This will overwrite the built-in image. */
	long img_size = load_img();

	/* Initialize differential testing. */
	init_difftest(diff_so_file, img_size);

	/* Initialize the simple debugger. */
	init_sdb();

	/*Initialize tracer*/
	IFDEF(CONFIG_TRACE, init_trace());
}
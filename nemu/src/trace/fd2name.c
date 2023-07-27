#include <assert.h>
#include <common.h>

typedef struct _f_table__ {
	char *filename;
	int fd;
	struct _f_table__ *next;	
} f_table_t;

f_table_t *f_table = NULL;
char errorname[] = "/error/name";
char std_out[] = "stdout";
char std_in[] = "stdin";
char std_err[] = "stderr";


void set_filename(char *s){
	f_table_t *p;
	if (f_table == NULL){
		f_table = (f_table_t *)malloc(sizeof(f_table_t));
		p = f_table;
		p->next = NULL;
	}
	else{
		p = f_table;
		while (p->next != NULL){
			p = p->next;
		}
		p->next = (f_table_t *)malloc(sizeof(f_table_t));
		p = p->next;
		p->next = NULL;
	}

	p->filename = s;
}

void set_fd(int fd){
	f_table_t *p = f_table;
	assert(f_table);
	while (p->next != NULL){
		p = p->next;
	}

	p->fd = fd;
}

void delete_file(int fd){
	if (fd == 0 || fd == 1 || fd == 2)
		return;

	f_table_t *p = f_table;
	assert(f_table);
	while (p != NULL && p->fd != fd){
		p = p->next;
	}

	if (p == NULL)
		return ;

	if (p->fd == fd){
		if (p == f_table){
			f_table = f_table->next;
			free(p->filename);
			free(p);
		}
		else{
			f_table_t *p1 = f_table;
			while (p1->next != p){
				p1 = p1->next;
			}
			p1->next = p->next;
			free(p->filename);
			free(p);
		}
	}
}

char *get_filename(int fd){
	if (fd == 0)
		return std_in;
	else if (fd == 1)
		return std_out;
	else if (fd == 2)
		return std_err;

	assert(f_table);
	f_table_t *p = f_table;
	while (p != NULL && p->fd != fd){
		p = p->next;
	}

	if (p == NULL)
		return errorname;

	if (p->fd == fd){
		return p->filename;
	}
	Assert(0, "file not found\n");
	return errorname;
}

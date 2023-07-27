#include <stdio.h>
#include <assert.h>

int main() {
  FILE *fp = fopen("/share/files/num", "r+");
  // assert(fp);

  printf("1 finish\n");
  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  assert(size == 5000);

  printf("2 finish\n");
  fseek(fp, 500 * 5, SEEK_SET);
  int i, n;
  for (i = 500; i < 1000; i ++) {
    fscanf(fp, "%d", &n);
    // printf("n = %d, i+1 = %d\n", n, i + 1);
    assert(n == i + 1);
  }

  printf("3 finish\n");
  fseek(fp, 0, SEEK_SET);
  for (i = 0; i < 500; i ++) {
    fprintf(fp, "%4d\n", i + 1 + 1000);
  }

  printf("4 finish\n");
  for (i = 500; i < 1000; i ++) {
    fscanf(fp, "%d", &n);
    assert(n == i + 1);
  }

  printf("5 finish\n");
  fseek(fp, 0, SEEK_SET);
  for (i = 0; i < 500; i ++) {
    fscanf(fp, "%d", &n);
    assert(n == i + 1 + 1000);
  }

  printf("6 finish\n");
  fclose(fp);

  printf("PASS!!!\n");

  return 0;
}

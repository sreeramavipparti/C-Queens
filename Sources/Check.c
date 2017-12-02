#include <stdio.h>
void main(int argc, char *argv[]) {
  int i=0;
  printf("Output from %s\n",argv[0]);
  for(i=1;i<argc;i++) {
    printf(argv[i]);
    printf("\n");
  }
} /* void main(int argc, char *argv[]) */
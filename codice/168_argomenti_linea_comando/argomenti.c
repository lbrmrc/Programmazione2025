// stampa a video tutti gli argomenti della linea di comando

#include <stdio.h>

int main(int argc, char *argv[]) {
  int i;

  printf("%d\n", argc);

  for (i = 1; i <= argc - 1; i++)
    printf("%s\n", argv[i]);
}
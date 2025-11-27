#include <stdio.h>

int main() {
  int d;
  fprintf(stdout, "Hello\n");
  fscanf(stdin, "%d", &d);
  return 0;
}
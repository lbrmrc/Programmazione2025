#include <stdio.h>

int main() {
  int a, b;
  float media;
  a = 1;
  b = 2;
  media = ((float)a + b) / 2;
  // media = (a + b) / 2.0; equivalente
  printf("media=%f\n", media);
}
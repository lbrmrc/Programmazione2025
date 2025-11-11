#include <stdio.h>
#define DIM 5

int somma(int *v, int dl) {
  int i, s = 0;
  for (i = 0; i < dl; i++){
    s += *(v+i);
    *(v+i) = 0;}
  return s;
}

int main(void) {
  int a[DIM] = {4, 1, 0, 8, 5};
  printf("%d\n", sizeof(a));
  printf("%d\n", sizeof(a)/sizeof(int));

  printf("%d\n", somma(a, 5)); // stampa 18
}
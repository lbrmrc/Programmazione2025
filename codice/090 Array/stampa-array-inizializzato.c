#include <stdio.h>
#define DIM 5

int main() {
  int i;
  float a[DIM] = {2.5f, 0.3f, 3.5f, 0.4f, 0.0f};
  for (i = 0; i < DIM; i++)
    printf("%f\n", a[i]);
  return 0;
}
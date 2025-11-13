#include <stdio.h>
#define DIM 10

int main() {
  int a[DIM];
  int i;
  for (i = 0; i < DIM; i++)
    scanf("%d", &a[i]);
  printf("\nStampa:\n");
  for (i = 0; i < DIM; i++)
    printf("%d\n", a[i]);
  return 0;
}
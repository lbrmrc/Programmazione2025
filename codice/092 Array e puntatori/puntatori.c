#include <stdio.h>

int main() {
  int a[5] = {4, 1, 0, 8, 5};
  int *p;
  p = a;
  printf("%d\n", *p);
  *p = 7;
  scanf("%d", a);
}
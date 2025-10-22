#include <stdio.h>

int main() {
  int a;
  int i;
  int p; // p = reduce(*, 1, [1,2,3,4,5])
  p = 1;
  for (i = 1; i <= 5; i++) {
    // i prende i valori [1..5]
    scanf("%d", &a);
    p = p * a;
  }
  printf("%d\n", p);
}
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  while (n > 0) // condizione
  {             // corpo
    printf("%d\n", n % 10);
    n = n / 10;
  }
  return 0;
}
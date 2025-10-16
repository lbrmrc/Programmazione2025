#include <stdio.h>

void valoreAssoluto(void) { // definizione
  int a;
  scanf("%d", &a);
  if (a >= 0)
    printf("valore assoluto: %d\n", a);
  else
    printf("valore assoluto: %d\n", -a);
}

int main() {
  valoreAssoluto();
  return 0;
}
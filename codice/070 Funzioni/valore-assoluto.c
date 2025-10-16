#include <stdio.h>

int valoreAssoluto(int n) { // definizione
  if (n >= 0)
    return n;
  else
    return -n;
}

int main() {
  int a;
  printf("Inserisci un numero intero\n");
  scanf("%d", &a);
  printf("valore assoluto: %d\n", valoreAssoluto(a)); // chiamata
  return 0;
}
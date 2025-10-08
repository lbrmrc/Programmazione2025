#include <stdio.h>

int main() {
  int numero;
  printf("Inserisci un numero intero\n");
  scanf("%d", &numero);
  if (numero > 0)
    printf("Positivo\n");
}
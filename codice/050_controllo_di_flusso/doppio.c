#include <stdio.h>

int main() {
  int n;
richiesta:
  printf("Inserisci un numero intero (negativo termina)\n");
  scanf("%d", &n);
  if (n >= 0) {
    printf("%d\n", 2 * n);
    goto richiesta;
  }
  return 0;
}
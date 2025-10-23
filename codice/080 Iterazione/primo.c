#include <stdio.h>

int primo(int n) {
  // restituisce 1 se n è primo, 0 altrimenti
  int i;                  // elemento della sequenza [1, 2, ..., n]
  int conteggio_divisori; // accumulatore
  conteggio_divisori = 0; // inizializzazione accumulatore
  for (i = 2; i * i <= n; i++) {
    // i prende i valori [1, 2, ..., n]
    if (conteggio_divisori > 0)
      return 0;
    if (n % i == 0) {
      // i prende i valori di filter(divide n, [1, ..., n])
      // cioè dei divisori di n
      conteggio_divisori++;
    }
  }
  // conteggio_divisori = reduce(++, 0, filter(divide n, [1, ..., n])) cioè il
  // numero di divisori di n;
  if (conteggio_divisori == 0)
    return 1;
  else
    return 0;
}

int main() {
  int n; // input

  scanf("%d", &n);
  if (primo(n))
    printf("%d è primo\n", n);
  else
    printf("%d non è primo\n", n);
}
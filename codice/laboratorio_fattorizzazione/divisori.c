#include <stdio.h>

int main() {
  int n; // numero richiesto all'utente
  int i; // elemento di [1, ..., n]
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    // i ha valori da 1 a n
    if (n % i == 0) // i divide n
    {
      // i ha valori nella seq dei divisori di n
      printf("%d\n", i);
    }
  }
}
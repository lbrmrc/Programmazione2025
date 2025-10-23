#include <stdio.h>

int main() {
  int dividendo, divisore;
  int quoziente; // accumulatore
  int m;         // elemento della sequenza
  scanf("%d%d", &dividendo, &divisore);
  m = dividendo;
  quoziente = 0; // inizializzazione accumulatore
  while (m >= divisore) {
    m = m - divisore;
    quoziente = quoziente + 1; // aggiornamento accumulatore
  }
  printf("Quoziente: %d\n", quoziente);
  printf("Resto: %d\n", m);
}
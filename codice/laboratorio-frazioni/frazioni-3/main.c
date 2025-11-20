// client ADT Frazione

#include <stdio.h>

#include "frazione.h"

// --- dato

// -- applicazione

int main() {
  Frazione f1,f2,f3,f4,f5;
  f1 = frazione(36, 60); // 3/5
  f2 = frazione(25, 50); // 1/2
  f3 = somma(f1, f2);
  f4 = frazione(50,-30);
  f5 = opposto(f4);
  stampaFrazionaria(f3);
  printf("\n");
  stampaFrazionaria(differenza(f1,f2));
  printf("\n");
  stampaFrazionaria(prodotto(f1,f2)); // stampa 3/10
  printf("\n");
  stampaFrazionaria(quoziente(f1,f2)); // stampa 6/5
  printf("\n");
  stampaDecimale(f1);
  printf("\n");
}
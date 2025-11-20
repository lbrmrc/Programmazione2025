// client ADT Frazione

#include <stdio.h>

#include "frazione.h"

// --- dato

// -- applicazione

int main() {
  Frazione f1; // 2/3
  Frazione f2;
  f1 = frazione(36, 60);
  // f2 = inputFrazione();
  stampaFrazionaria(f1); // stampa 2/3
  printf("\n");
  stampaDecimale(f1); // stampa 0.66666...
  printf("\n");
}
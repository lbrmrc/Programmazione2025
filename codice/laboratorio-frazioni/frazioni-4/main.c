// client ADT Frazione

#include <stdio.h>

#include "frazione.h"

// --- dato

// -- applicazione

int main() {
  Frazione f1,f2,f3,f4,f5, f6;
  frazione(&f1, 36, 60); // 3/5
  frazione(&f2, 25, 50); // 1/2
  somma(&f3, f1, f2);
  differenza(&f4, f1, f2);
  prodotto(&f5, f1, f2);
  frazione(&f6, 0, 1);
  // quoziente(&f5, f1, f6);
  
  inputFrazione(&f6);

  // f5 = opposto(f4);
  // stampaFrazionaria(f3);
  // printf("\n");
  // stampaFrazionaria(differenza(f1,f2));
  // printf("\n");
  // stampaFrazionaria(prodotto(f1,f2)); // stampa 3/10
  // printf("\n");
  // stampaFrazionaria(quoziente(f1,f2)); // stampa 6/5
  // printf("\n");
  // stampaDecimale(f1);
  // printf("\n");
}
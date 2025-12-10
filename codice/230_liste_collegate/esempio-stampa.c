#include <stdio.h>

#include "tipi.h"

#include "generatoreListe.h"

void stampa(Lista l) {
  while (l != NULL) { // finché l non è vuota
    // stampo testa di l
    printf("%d\n", l->dato);
    l = l->next; // assegno a l la sua coda}
  }
}

int main() {
  Lista l;
  listaNonOrdinata(&l, 3);
  stampa(l);

  return 0;
}
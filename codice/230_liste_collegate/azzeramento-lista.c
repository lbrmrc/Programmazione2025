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

void azzeraLista(Lista l) {
  while (l != NULL) {
    l->dato = 0; // azzero la testa di l
    l = l->next;
  }
}

int main() {
  Lista l;
  listaNonOrdinata(&l, 6);
  stampa(l);
  azzeraLista(l);
  stampa(l);
  return 0;
}
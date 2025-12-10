#include <stdio.h>
#include <stdlib.h>

#include "tipi.h"

#include "generatoreListe.h"

void stampa(Lista l) {
  while (l != NULL) { // finché l non è vuota
    // stampo testa di l
    printf("%d\n", l->dato);
    l = l->next; // assegno a l la sua coda}
  }
}

void insTesta(Lista *pl, int valore) {
  Nodo *aux; // Lista aux;
  aux = (Nodo *)malloc(sizeof(Nodo));
  aux->dato = 5;
  aux->next = *pl; // valore della l del main, indirizzo del 6
  *pl = aux;
}

int main() {
  Lista l;
  listaNonOrdinata(&l, 3);
  stampa(l);
  insTesta(&l, 5);
  printf("\n");
  stampa(l);

  return 0;
}
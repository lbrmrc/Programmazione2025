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

int lunghezza(Lista l) {
  int contatore = 0;
  while (l != NULL) {
    contatore++;
    l = l->next;
  }
  return contatore;
}

int *listToArray(Lista l) {
  int dimensione = lunghezza(l);
  int *pi;
  int indice;
  pi = (int *)malloc(dimensione * sizeof(int));

  indice = 0;
  while (l != NULL) {
    pi[indice] = l->dato;
    indice++;
    l = l->next;
  }
  return pi;
}

int main() {
  Lista l;
  int *pi;
  listaNonOrdinata(&l, 4);
  printf("%d", lunghezza(l));
  stampa(l);
  pi = listToArray(l);
  return 0;
}
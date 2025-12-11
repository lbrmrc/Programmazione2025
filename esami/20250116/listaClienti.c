#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "listaClienti.h"

void nuovaLista(Lista *l) { *l = NULL; }

void insTesta(Lista *pl, Cliente c) {
  Nodo *aux = (Nodo *)malloc(sizeof(Nodo));
  aux->dato = c;
  aux->next = *pl;
  *pl = aux;
}

float importo(float consumo) {
  return 25 + 0.16643 * consumo;
}

void aggiorna(Lista *pl, Record r) {
  while (*pl && strcmp((*pl)->dato.codicefiscale, r.codicefiscale) != 0)
    pl = &(*pl)->next;
  if (*pl == NULL) {
    Cliente c;
    strcpy(c.codicefiscale, r.codicefiscale);
    c.consumototale = 0.0;
    c.importototale = 0.0;
    insTesta(pl, c);
  }
  (*pl)->dato.consumototale += r.consumo;
  (*pl)->dato.importototale += importo(r.consumo);
}

void stampa(Lista l) {
  while (l != NULL) {
    printf("%s %.3f %.2f\n", l->dato.codicefiscale, l->dato.consumototale,
           l->dato.importototale);
    l = l->next;
  }
}
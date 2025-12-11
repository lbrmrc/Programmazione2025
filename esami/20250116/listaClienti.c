#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "listaClienti.h"

void nuovaLista(Lista *pl) { *pl = NULL; }

void insTesta(Lista *pl, Dato d) {
  Nodo *aux = (Nodo *)malloc(sizeof(Nodo));
  aux->dato = d;
  aux->next = *pl;
  *pl = aux;
}

void aggiorna(Lista *pl, Record r) {
  while (*pl != NULL && strcmp((*pl)->dato.cf, r.cf) != 0)
    pl = &(*pl)->next;

  if (*pl != NULL && strcmp((*pl)->dato.cf, r.cf) == 0) {
    (*pl)->dato.consumo_totale += r.consumo;
    (*pl)->dato.addebito_totale += 25.0 + 0.16643 * r.consumo;
  } else {
    Dato d;
    strcpy(d.cf, r.cf);
    d.consumo_totale = r.consumo;
    d.addebito_totale = 25.0 + 0.16643 * r.consumo;
    insTesta(pl, d);
  }
}

void stampa(Lista l) {
  while (l != NULL) {
    printf("%s %.3f %.2f\n", l->dato.cf, l->dato.consumo_totale,
           l->dato.addebito_totale);
    l = l->next;
  }
}
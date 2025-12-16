#include <stdio.h>
#include <stdlib.h>

#include "listaStudenti.h"

void nuovaLista(Lista *pl) { *pl = NULL; }

void insTesta(Lista *pl, Dato d) {
  Nodo *aux;
  aux = (Nodo *)malloc(sizeof(Nodo));
  if (aux == NULL) {
    printf("Errore allocazione memoria\n");
    exit(100);
  }
  aux->dato = d;
  aux->next = *pl;
  *pl = aux;
}

void aggiorna(Lista *pl, Record r) {
  while (*pl != NULL && (*pl)->dato.matricola != r.matricola)
    pl = &(*pl)->next;

  if (*pl == NULL) {
    Dato d;
    d.matricola = r.matricola;
    d.somma_voti = 0;
    d.numero_esami = 0;
    insTesta(pl, d);
  }
  (*pl)->dato.somma_voti += r.voto;
  (*pl)->dato.numero_esami++;
}

void stampa(Lista l){
    while (l!=NULL){
        // l->dato è la testa della lista
        printf("%d %.2f\n", l->dato.matricola, (float)l->dato.somma_voti/l->dato.numero_esami);
        l = l->next;
    }
}
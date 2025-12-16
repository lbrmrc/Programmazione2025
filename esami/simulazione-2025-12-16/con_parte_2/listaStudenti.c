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




int confronto(Dato d1, Dato d2) { // semantica stile strcmp
  // valore < 0 se d1 precede d2
  // valore 0 se sono uguali;
  // valore > 0 se d2 precede d1
  int r;
  r = d1.numero_esami - d2.numero_esami;
  if (r != 0)
    return -r;
  else {
    if ((float)d1.somma_voti / d1.numero_esami <
        (float)d2.somma_voti / d2.numero_esami)
      return 1;
    else if ((float)d1.somma_voti / d1.numero_esami >
             (float)d2.somma_voti / d2.numero_esami)
      return -1;
    else
      return 0;
  }
}

void ins_ord(Lista *pl, Dato d) {
  while (*pl != NULL && confronto((*pl)->dato, d) < 0)
    pl = &(*pl)->next;
  insTesta(pl, d);
}

void ordina(Lista l1, Lista *pl2) {
  nuovaLista(pl2);
  while (l1 != NULL) {
    ins_ord(pl2, l1->dato);
    l1 = l1->next;
  }
}

void stampa(Lista l) {
  while (l != NULL) {
    // l->dato è la testa della lista
    printf("%d %d %.2f\n", l->dato.matricola, l->dato.numero_esami,
           (float)l->dato.somma_voti / l->dato.numero_esami);
    l = l->next;
  }
}
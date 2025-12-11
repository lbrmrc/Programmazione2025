#include <stdio.h>
#include <stdlib.h>

typedef int Dato;
typedef struct nodo {
  Dato dato;
  struct nodo *next;
} Nodo;
typedef Nodo *Lista;

void insTesta(Lista *pl, Dato d) {
  Nodo *aux = (Nodo *)malloc(sizeof(Nodo));
  aux->dato = d;
  aux->next = *pl;
  *pl = aux;
}

void elimTesta(Lista *pl) {
  Nodo *aux = *pl;
  *pl = (*pl)->next;
  free(aux);
}

void nuovaLista(Lista *pl) { *pl = NULL; }

void insOrd(Lista *pl, Dato d) {

  while (*pl && (*pl)->dato < d)
    pl = &(*pl)->next;

  insTesta(pl, d);
}

int elimina_elemento(Lista *pl, Dato d) {
  while (*pl != NULL && (*pl)->dato != d)
    pl = &(*pl)->next;

  if (*pl != NULL) {
    elimTesta(pl);
    return 1;
  } else
    return 0;
}

Lista insertionSortConEliminazione(Lista l1) {
  Lista l2;
  nuovaLista(&l2);
  while (l1 != NULL) {
    insOrd(&l2, l1->dato);
    elimTesta(&l1);
  }
  return l2;
}

int main() {
  Lista l1;
  nuovaLista(&l1);
  insTesta(&l1, 1);
  insTesta(&l1, 7);
  insTesta(&l1, 2);
  insTesta(&l1, 4);

  l1 = insertionSortConEliminazione(l1);
}
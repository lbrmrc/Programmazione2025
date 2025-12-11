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

void nuovaLista(Lista *pl) { *pl = NULL; }

void insOrd(Lista *pl, Dato d) {

  while (*pl && (*pl)->dato < d)
    pl = &(*pl)->next;

  insTesta(pl, d);
}

int main() {
  Lista l;
  nuovaLista(&l);
  insOrd(&l, 4);
  insOrd(&l, 2);
  insOrd(&l, 5);
}
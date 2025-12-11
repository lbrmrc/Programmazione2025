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

int main() {
  Lista l;
  nuovaLista(&l);
  insOrd(&l, 4);
  insOrd(&l, 2);
  insOrd(&l, 4);
  insOrd(&l, 5);
  elimina_elemento(&l, 4);
  if (!elimina_elemento(&l, 7)) {
    printf("Errore: elemento non presente\n");
  }
}
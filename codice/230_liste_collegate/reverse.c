#include <stdio.h>
#include <stdlib.h>

typedef int Dato;
typedef struct nodo {
  Dato dato;
  struct nodo *next;
} Nodo;
typedef Nodo *Lista;

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

void stampa(Lista l) {
  while (l != NULL) {
    printf("%d ", l->dato);
    l = l->next;
  }
  printf("\n");
}

void reverse(Lista l1, Lista *pl2) {
  *pl2 = NULL;
  while (l1 != NULL) {
    insTesta(pl2, l1->dato);
    l1 = l1->next;
  }
}

int main() {
  Lista l1, l2;
  l1 = NULL; //[2,0,4,3];
  insTesta(&l1, 3);
  insTesta(&l1, 4);
  insTesta(&l1, 0);
  insTesta(&l1, 2);
  stampa(l1);
  reverse(l1, &l2);
  stampa(l2); // [3,4,0,2]
}

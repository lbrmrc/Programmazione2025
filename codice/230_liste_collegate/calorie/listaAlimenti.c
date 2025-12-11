#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "listaAlimenti.h"

// definizione
void nuovaLista(Lista *pl) { *pl = NULL; }

void insTesta(Lista *pl, Cibo d) {
  Nodo *aux = (Nodo *)malloc(sizeof(Nodo));
  if (aux == NULL) {
    printf("Errore allocazione memoria\n");
    exit(100);
  }
  aux->dato = d;
  aux->next = *pl;
  *pl = aux;
}

void insCoda(Lista *pl, Cibo d) {
  while(*pl != NULL)
    pl = &(*pl)->next;
 
  insTesta(pl, d);
}

float calorie100(Lista l, char nome[]) {
  while (l!= NULL){
    // l->dato è la testa della lista
    if (strcmp(l->dato.nome, nome) == 0)
      return l->dato.calorie;
    l = l->next;
  }
  
  printf("Cibo non trovato: %s\n", nome);
  exit(4);
}
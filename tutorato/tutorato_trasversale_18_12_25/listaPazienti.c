#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "listaPazienti.h"

void nuovaLista(Lista *l) { *l = NULL; }

void insTesta(Lista *pl, Paziente c) {
  Nodo *aux = (Nodo *)malloc(sizeof(Nodo));
  aux->dato = c;
  aux->next = *pl;
  *pl = aux;
}

void aggiorna(Lista *pl, Temperatura r) {
  while (*pl && (*pl)->dato.id != r.idPaziente)
    pl = &(*pl)->next;
  if (*pl == NULL) {
    Paziente c;
    c.id = r.idPaziente;
    c.sommaTemperature = r.valore;
    c.numeroTemperature = 1;
    c.min = r.valore;
    c.max = r.valore;
    insTesta(pl, c);
  } else {
    (*pl)->dato.sommaTemperature += r.valore;
    (*pl)->dato.numeroTemperature++;
    if (r.valore < (*pl)->dato.min)
      (*pl)->dato.min = r.valore;
    if (r.valore > (*pl)->dato.max)
      (*pl)->dato.max = r.valore;
  }
}

void stampa(Lista l) {
  while (l != NULL) {
    printf("%d %.2f %.1f %.1f\n", l->dato.id,
           l->dato.sommaTemperature / l->dato.numeroTemperature, l->dato.min,
           l->dato.max);
    l = l->next;
  }
}
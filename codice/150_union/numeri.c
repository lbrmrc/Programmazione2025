#include <stdio.h>
typedef struct {
  enum { intero, reale } tipo;
  union {
    int dato_intero;
    float dato_reale;
  } dato;
} Numero;

void assegna_intero(Numero *n, int i) {
  n->tipo = intero;
  n->dato.dato_intero = i;
}
void assegna_reale(Numero *n, float f) {
  n->tipo = reale;
  n->dato.dato_reale = f;
}
void stampa(Numero n) {
  switch (n.tipo) {
  case (intero):
    printf("%d\n", n.dato.dato_intero);
    break;
  case (reale):
    printf("%f\n", n.dato.dato_reale);
    break;
  }
}

int main() {
  Numero n;
  assegna_intero(&n, 3);
  stampa(n);
  assegna_reale(&n, 3.5);
  stampa(n);
  return 0;
}
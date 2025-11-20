// Implementazione ADT Frazione

#include <stdio.h>
#include <stdlib.h>

#include "frazione.h"

// --- creazione e accesso dati

int va(int n) {
  if (n < 0)
    return -n;
  else
    return n;
}

int mcd(int a, int b) {
  while (a != b)
    if (a > b)
      a = a - b;
    else
      b = b - a;
  return a;
}

void frazione(Frazione *pf, int n, int d) { // "costruttore"
  int divisore;
  if (d == 0) {
    printf("Divisione per 0\n");
    exit(1);
  }
  if (d < 0) {
    n = -n;
    d = -d;
  }
  if (n == 0)
    divisore = 1;
  else
    divisore = mcd(va(n), va(d));
  (*pf).num = n / divisore;
  (*pf).den = d / divisore;
}

int num(Frazione f) { // getter
  return f.num;
}

int den(Frazione f) { // getter
  return f.den;
}

// --- operazioni

void stampaFrazionaria(Frazione f) { printf("%d/%d", num(f), den(f)); }

void stampaDecimale(Frazione f) { printf("%f", (float)num(f) / den(f)); }

void inputFrazione(Frazione *pf) {
  scanf("%d%d", &pf->num, &pf->den);

  // sarebbe più pulito
  // int n, d;
  // pf->num = n; // (*pf).num = n;
  // pf->den = d;
  // frazione(pf, n, d);
  // in modo da non bypassare i controlli del costruttore
}

// // --- funzioni aritmetiche

void opposto(Frazione *pf, Frazione f) { frazione(pf, -num(f), den(f)); }

void inverso(Frazione *pf, Frazione f) { frazione(pf, den(f), num(f)); }

void somma(Frazione *pf, Frazione f1, Frazione f2) {
  frazione(pf, num(f1) * den(f2) + num(f2) * den(f1), den(f1) * den(f2));
}

void differenza(Frazione *pf, Frazione f1, Frazione f2) {
  Frazione o;
  opposto(&o, f2);
  somma(pf, f1, o);
}

void prodotto(Frazione *pf, Frazione f1, Frazione f2) {
  frazione(pf, num(f1) * num(f2), den(f1) * den(f2));
}

void quoziente(Frazione *pf, Frazione f1, Frazione f2) {
  Frazione i;
  inverso(&i, f2);
  prodotto(pf, f1, i);
}

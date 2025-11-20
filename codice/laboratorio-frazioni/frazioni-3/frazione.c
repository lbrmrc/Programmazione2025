// Implementazione ADT Frazione

#include <stdio.h>

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

Frazione frazione(int n, int d) { // "costruttore"
  Frazione f;
  int divisore;
  if (d < 0){
    n = -n;
    d = -d;
  }
  divisore = mcd(va(n), va(d));
  f.num = n / divisore;
  f.den = d / divisore;
  return f;
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

Frazione inputFrazione(void) {
  int n, d;
  scanf("%d%d", &n, &d);
  return frazione(n, d);
}

// --- funzioni aritmetiche

Frazione opposto(Frazione f){
  return frazione(-num(f), den(f));
}

Frazione somma(Frazione f1, Frazione f2) {
  return frazione(num(f1) * den(f2) + num(f2) * den(f1), den(f1) * den(f2));
}

Frazione differenza(Frazione f1, Frazione f2) {
  return somma(f1, opposto(f2));
}
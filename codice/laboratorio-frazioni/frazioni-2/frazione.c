#include <stdio.h>

#include "frazione.h"

// --- creazione e accesso dati

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
  f.num = n;
  f.den = d;
  return f;
}

int num(Frazione f) { // getter
  return f.num;
}

int den(Frazione f) { // getter
  return f.den;
}

// --- operazioni

void stampaFrazionaria(Frazione f) {
  int divisore;
  divisore = mcd(num(f), den(f));
  printf("%d/%d", num(f) / divisore, den(f) / divisore);
}

void stampaDecimale(Frazione f) { printf("%f", (float)num(f) / den(f)); }

Frazione inputFrazione(void) {
  int n, d;
  scanf("%d%d", &n, &d);
  return frazione(n, d);
}
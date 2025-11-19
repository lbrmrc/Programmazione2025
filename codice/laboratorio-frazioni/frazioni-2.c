#include <stdio.h>

// --- dato

typedef struct {
  int num;
  int den;
} Frazione;

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

// -- applicazione

int main() {
  Frazione f1; // 2/3
  Frazione f2;
  f1 = frazione(36, 60);
  // f2 = inputFrazione();
  stampaFrazionaria(f1); // stampa 2/3
  printf("\n");
  stampaDecimale(f1); // stampa 0.66666...
  printf("\n");
}
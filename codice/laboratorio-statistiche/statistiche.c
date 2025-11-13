#include <stdio.h>
#define DIM 100

int leggi_valori(int a[]) {
  int i;
  i = 0;
  do {
    scanf("%d", &a[i]);
    if (a[i] < 0)
      break;
    i++;
  } while (i < DIM);
  return i;
}

int minimo(int a[], int dl) {
  int m; // indice del minimo
  int i;
  m = 0;
  for (i = 1; i < dl; i++)
    if (a[i] < a[m])
      m = i;
  // a[m] è il minimo
  return a[m];
}

int massimo(int a[], int dl) {
  int m; // indice del massimo
  int i;
  m = 0;
  for (i = 1; i < dl; i++)
    if (a[i] > a[m])
      m = i;
  // a[m] è il massimo
  return a[m];
}

int somma(int a[], int dl) {
  int i;
  int s; // accumulatore
  s = 0;
  for (i = 0; i < dl; i++)
    s = s + a[i];
  // s è la somma degli elementi di a;
  return s;
}

float media(int a[], int dl) { return (float)somma(a, dl) / dl; }

int numeri_frequenti(int a[], int dl, int pd[], int *pdlpf) {
  int i, j;
  int numeri[DIM];
  int frequenze[DIM];
  int frequenza_massima;
  int dlnf; // dimensione logica di numeri e frequenze
  dlnf = 0;
  for (i = 0; i < dl; i++) {
    for (j = 0; j < dlnf; j++)
      if (a[i] == numeri[j]) {
        frequenze[j]++;
        break;
      }
    if (j == dlnf) {
      numeri[dlnf] = a[i];
      frequenze[dlnf] = 1;
      dlnf++;
    }
  }
  frequenza_massima = massimo(frequenze, dlnf);
  *pdlpf = 0;
  for (j = 0; j < dlnf; j++)
    if (frequenze[j] == frequenza_massima) {
      pd[*pdlpf] = numeri[j];
      (*pdlpf)++;
    }
  return frequenza_massima;
}

int main() {
  int a[DIM], dl;
  int pf[DIM], dlpf, fm, i;
  dl = leggi_valori(a);
  printf("Minimo: %d\n", minimo(a, dl));
  printf("Massimo: %d\n", massimo(a, dl));
  printf("Media: %.2f\n", media(a, dl));
  fm = numeri_frequenti(a, dl, pf, &dlpf);
  printf("Numeri più frequenti (%d occorrenze)\n", fm);
  for (i = 0; i < dlpf; i++)
    printf("%d\n", pf[i]);
}
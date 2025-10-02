#include <stdio.h>

int main() {
  // definizioni di variabili
  int G, M, A;
  int N0, N1, N2, N3;
  int JD;

  // input di G, M, A
  printf("Inserisci il giorno\n");
  scanf("%d", &G);
  printf("Inserisci il mese\n");
  scanf("%d", &M);
  printf("Inserisci l'anno\n");
  scanf("%d", &A);

  // calcolo di N0
  N0 = (M - 14) / 12;
  // calcolo di N1
  N1 = 1461 * (A + 4800 + N0) / 4;
  // calcolo di N2
  N2 = 367 * (M - 2 - 12 * N0) / 12;
  // calcolo di N3
  N3 = 3 * (A + 4900 + N0) / 400;
  // calcolo di JD
  JD = N1 + N2 - N3 + G - 32075;
  // stampa di JD
  printf("Il giorno giuliano è %d\n", JD);
}
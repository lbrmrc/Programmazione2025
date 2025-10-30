#include <stdio.h>

float va(float x) { return x < 0 ? -x : x; }

float radiceN(float a, int N) {
  float x;
  float p;
  int i;
  x = 1.0f;

  do {

    p = 1.0f;
    for (i = 0; i < N - 1; i++) {
      p = p * x;
    }

    x = ((N - 1) * p * x + a) / (N * p);

  } while (va(p * x - a) / a > 1e-5);

  return x;
}

int main() {
  float y;
  int M;
  int k;
  printf("Inserisci un numero reale e un numero intero\n");
  scanf("%f%d", &y, &M);
  for (k = 2; k <= M; k++) {
    // k prende valori da [2,...,M]
    printf("%f\n", radiceN(y, k));
  }
  return 0;
}
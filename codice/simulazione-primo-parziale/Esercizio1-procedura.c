#include <stdio.h>

float va(float x) { return x < 0 ? -x : x; }

void radiceN(float a, int N, float *pr) {
  float x;
  float p;
  int i;
  x = 1.0f;

  do {

    p = 1.0f;
    i = 0;
    while (i < N - 1) {
        p = p * x;
        i++;
      }

    x = ((N - 1) * p * x + a) / (N * p);

  } while (va(p * x - a) / a > 1e-5);

  *pr = x ;
}

int main() {
  float y;
  int M;
  int k;
  float r;
  printf("Inserisci un numero reale e un numero intero\n");
  scanf("%f%d", &y, &M);
  for (k = 2; k <= M; k++) {
    // k prende valori da [2,...,M]
    radiceN(y, k, &r);
    printf("%f\n", r);
  }
  return 0;
}
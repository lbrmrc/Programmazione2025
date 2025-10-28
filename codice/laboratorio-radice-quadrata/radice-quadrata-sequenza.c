#include <stdio.h>

float valore_assoluto(float x) {
  // valore assoluto del parametro
  if (x >= 0.0f)
    return x;
  else
    return -x;
}

float media(float a, float b) {
  // media aritmetica dei parametri
  return (a + b) / 2.0;
}

void radq(float a, float *px) {
  *px = 1.0f;
  while (valore_assoluto(*px * *px - a) / a > 1e-6)
    *px = media(*px, a / *px); //  (x + a / x) / 2.0f;
}

int main() {
  int n;
  int i;
  float x;
  printf("Inserisci un numero naturale\n");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    radq(i, &x); // scrive in x la rad. quadr. di i
    printf("%f\n", x);
  }
}
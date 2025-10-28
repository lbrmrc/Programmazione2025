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

float radq(float a) {
  float x;
  x = 1.0f;
  while (valore_assoluto(x * x - a) / a > 1e-6)
    x = media(x, a / x); //  (x + a / x) / 2.0f;
  return x;
}

int main() {
  float a;
  printf("Inserisci un numero reale\n");
  scanf("%f", &a);
  printf("%f\n", radq(a));
}
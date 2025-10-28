#include <math.h>
#include <stdio.h>

int main() {
  float a;
  float x;
  printf("Inserisci un numero reale\n");
  scanf("%f", &a);
  x = 1.0f;
  while (fabsf(x * x - a) / a > 1e-6)
    x = (x + a / x) / 2.0f;
  printf("%f\n", x);
}
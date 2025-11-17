#include <stdio.h>

float va(float x) { return x >= 0.0 ? x : -x; }

float rad2(float a) {
  float x, d;
  d = 1.0;
  while (d * d * 100. < a)
    d = d * 10.;
  x = d;
  while (va(x * x - a)/a > 1e-6) {
    while ((x + d) * (x + d) < a)
      x = x + d;
    d = d / 10.0;
  }
  return x;
}

int main() {
  float x;
  int n, i;
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
    printf("%f\n", rad2(i));
  return 0;
}
#include <math.h>
#include <stdio.h>

int main() {
  printf("%f\n", fabsf(-0.5f));
  printf("%lf\n", fabs(-0.5));
  if (fabs(0.1 + 0.1 + 0.1 - 0.3) < 1e-15)
    printf("uguali\n");
  else
    printf("diversi\n");
}
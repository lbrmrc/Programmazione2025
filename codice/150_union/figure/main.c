#include <stdio.h>

#include "figura.h"

int main() {
  Figura f;
  f = quadrato(2.5);
  printf("%f\n", area(f));
  printf("%f\n", perimetro(f));

  f = rettangolo(3.5, 4.2);
  printf("%f\n", area(f));
  printf("%f\n", perimetro(f));
}
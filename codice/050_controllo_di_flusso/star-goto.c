#include <stdio.h>

int main() {
  int contatore; // numero di * stampati
  contatore = 0;
star:
  printf("*\n");
  contatore++;
  if (contatore < 50000)
    goto star;
  printf("\n\n");
}
#include <stdio.h>
#include <stdlib.h>

#define NRIGHE 6
#define NCOLONNE 10

float rnd_flt(float min, float max) {
  return min + (float)rand() / RAND_MAX * (max - min);
}

void inizializza(char c[NRIGHE][NCOLONNE], float probmina) {
  int i, j;

  for (i = 0; i < NRIGHE; i++)
    for (j = 0; j < NCOLONNE; j++) {
      float mina = rnd_flt(0.0, 1.0);
      if (mina <= probmina)
        c[i][j] = '*';
      else
        c[i][j] = ' ';
    }
}

void stampa(char c[NRIGHE][NCOLONNE]) {
  int i, j;
  for (i = 0; i < NRIGHE; i++) {
    for (j = 0; j < NCOLONNE; j++)
      printf("%c", c[i][j]);
    printf("\n");
  }
}

int main() {
  char campo[NRIGHE][NCOLONNE];
  inizializza(campo, 0.2);
  stampa(campo);
}
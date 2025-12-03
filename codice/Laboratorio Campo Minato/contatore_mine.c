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

int mine_adiacenti(char campo[NRIGHE][NCOLONNE], int r, int c) {
  // restituisce il numero di mine in campo adiacenti alla cella <r,c>
  int contatore = 0;
  if (r - 1 >= 0 && c - 1 >= 0 && campo[r - 1][c - 1] == '*')
    contatore++;
  if (r - 1 >= 0 && campo[r - 1][c] == '*')
    contatore++;
  if (r - 1 >= 0 && c + 1 < NCOLONNE && campo[r - 1][c + 1] == '*')
    contatore++;
  if (c - 1 >= 0 && campo[r][c - 1] == '*')
    contatore++;
  if (c + 1 < NCOLONNE && campo[r][c + 1] == '*')
    contatore++;
  if (r + 1 < NRIGHE && c - 1 >= 0 && campo[r + 1][c - 1] == '*')
    contatore++;
  if (r + 1 < NRIGHE && campo[r + 1][c] == '*')
    contatore++;
  if (r + 1 < NRIGHE && c + 1 < NCOLONNE && campo[r + 1][c + 1] == '*')
    contatore++;

  return contatore;
}

void stampa(char c[NRIGHE][NCOLONNE]) {
  int i, j;
  for (i = 0; i < NRIGHE; i++) {
    for (j = 0; j < NCOLONNE; j++)
      if (c[i][j] == '*')
        printf("*");
      else {
        int contatore = mine_adiacenti(c, i, j);
        if (contatore > 0)
          printf("%d", contatore);
        else
          printf(" ");
      }
    printf("\n");
  }
}

int main() {
  char campo[NRIGHE][NCOLONNE];
  inizializza(campo, 0.2);
  stampa(campo);
}
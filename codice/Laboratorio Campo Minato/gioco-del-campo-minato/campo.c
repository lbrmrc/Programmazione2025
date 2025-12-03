#include <stdio.h>
#include <stdlib.h>

#include "campo.h"

float rnd_flt(float min, float max) {
  return min + (float)rand() / RAND_MAX * (max - min);
}

void inizializza(Campo *pcampo, float probmina) {
  int i, j;

  for (i = 0; i < NRIGHE; i++)
    for (j = 0; j < NCOLONNE; j++) {
      pcampo->celle[i][j].coperta =
          1; // (*pcampo).celle si scrive pcampo->celle
      pcampo->celle[i][j].mina = (rnd_flt(0.0, 1.0) <= probmina);
    }
}

int mine_adiacenti(Cella celle[NRIGHE][NCOLONNE], int r, int c) {
  // restituisce il numero di mine in campo adiacenti alla cella <r,c>
  int contatore = 0;
  if (r - 1 >= 0 && c - 1 >= 0 && celle[r - 1][c - 1].mina)
    contatore++;
  if (r - 1 >= 0 && celle[r - 1][c].mina)
    contatore++;
  if (r - 1 >= 0 && c + 1 < NCOLONNE && celle[r - 1][c + 1].mina)
    contatore++;
  if (c - 1 >= 0 && celle[r][c - 1].mina)
    contatore++;
  if (c + 1 < NCOLONNE && celle[r][c + 1].mina)
    contatore++;
  if (r + 1 < NRIGHE && c - 1 >= 0 && celle[r + 1][c - 1].mina)
    contatore++;
  if (r + 1 < NRIGHE && celle[r + 1][c].mina)
    contatore++;
  if (r + 1 < NRIGHE && c + 1 < NCOLONNE && celle[r + 1][c + 1].mina)
    contatore++;

  return contatore;
}

void leggiMossa(Mossa *pm) {
  char s[3];
  scanf("%s", s);
  pm->riga = s[1] - '1';
  pm->colonna = s[0] - 'a';
}

void stampa(Campo *pc) {
  int i, j;
  printf("  ");
  for (j = 0; j < NCOLONNE; j++)
    printf("%c", 'a' + j);
  printf("\n");
  for (i = 0; i < NRIGHE; i++) {
    printf("%d ", i + 1);
    for (j = 0; j < NCOLONNE; j++)
      if (pc->celle[i][j].coperta)
        printf("#");
      else if (pc->celle[i][j].mina)
        printf("*");
      else {
        int contatore = mine_adiacenti(pc->celle, i, j);
        if (contatore > 0)
          printf("%d", contatore);
        else
          printf(" ");
      }
    printf("\n");
  }
}

void aggiorna(Campo *pc, Mossa *pm) {
  pc->celle[pm->riga][pm->colonna].coperta = 0;
}

Valutazione valuta(Campo *pc) {
  int i, j;
  for (i = 0; i < NRIGHE; i++)
    for (j = 0; j < NCOLONNE; j++)
      if (pc->celle[i][j].mina && !pc->celle[i][j].coperta)
        return Sconfitta;
  for (i = 0; i < NRIGHE; i++)
    for (j = 0; j < NCOLONNE; j++)
      if (!pc->celle[i][j].mina && pc->celle[i][j].coperta)
        return Aperto;
    return Vittoria;
}
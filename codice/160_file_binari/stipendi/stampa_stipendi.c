#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM 100

#include "dipendente.h"

int main() {
  Dipendente dipendenti[DIM];
  int dl;
  FILE *pf;
  int i;
  if ((pf = fopen("stipendi.dat", "rb")) == NULL) {
    printf("Errore apertura file\n");
    exit(1);
  }

  dl = fread(dipendenti, sizeof(Dipendente), DIM, pf);

  if (fclose(pf) != 0) {
    printf("Errore chiusura file\n");
    exit(2);
  }

  for (i = 0; i < dl; i++) {
    printf("%s %f\n", dipendenti[i].nome, dipendenti[i].stipendio);
  }

  return 0;
}
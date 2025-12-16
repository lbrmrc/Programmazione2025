#include <stdio.h>
#include <stdlib.h>

#include "listaStudenti.h"

int main(int argc, char *argv[]) {
  FILE *pf;
  Record r;
  Lista l;

  nuovaLista(&l);

  if (argc != 2) {
    printf("Uso: %s file_esami\n", argv[0]);
    exit(1);
  }

  pf = fopen(argv[1], "rb");
  if (pf == NULL) {
    printf("Errore apertura file %s\n", argv[1]);
    exit(2);
  }

  while (fread(&r, sizeof(Record), 1, pf) == 1) {
    // in r c'è un record del file
    aggiorna(&l, r);
  }

  if (fclose(pf) != 0) {
    printf("Errore chiusura file\n");
    exit(3);
  }

  stampa(l);

  return 0;
}
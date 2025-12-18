#include <stdio.h>
#include <stdlib.h>

#include "listaPazienti.h"

int main(int argc, char *argv[]) {
  Lista l;
  Temperatura r;
  FILE *f_bin;
  
  if (argc != 2){
    printf("Uso: %s <nome_file_rilevamenti>\n", argv[0]);
    exit(1);
  }

  nuovaLista(&l);
  f_bin = fopen(argv[1], "rb");
  if (f_bin == NULL){
    printf("Errore apertura file %s\n", argv[1]);
    exit(2);
  }
  while (fread(&r, sizeof(Temperatura), 1, f_bin) == 1) {
    aggiorna(&l, r);
  }
  fclose(f_bin);
  stampa(l);

  return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dipendente.h"

int main(int argc, char *argv[]) {
  Dipendente dipendenti[5] = {{"Rossi", 1750.0},
                              {"Bianchi", 1857.4},
                              {"Verdi", 2160.0},
                              {"Neri", 2000.0},
                              {"Esposito", 1950.0}};
  FILE *pf;
  int i;

  if (argc != 2){
    printf("Uso: %s nome_file\n", argv[0]);
    exit(3);
  }

  if ((pf = fopen(argv[1], "wb")) == NULL) {
    printf("Errore apertura file\n");
    exit(1);
  }

  fwrite(dipendenti, sizeof(Dipendente), 5, pf);

//   for (i = 0; i < 5; i++) {
//     fwrite(&dipendenti[i], sizeof(Dipendente), 1, pf);
//   }

  if (fclose(pf) != 0) {
    printf("Errore chiusura file\n");
    exit(2);
  }
  return 0;
}
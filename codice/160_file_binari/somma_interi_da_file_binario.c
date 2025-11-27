// stampa la somma degli interi nel file interi.dat

#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *pf;
  int valore;
  int somma; // reduce(+, 0, <contenuto di interi.dat>)

  if ((pf = fopen("interi.dat", "rb")) == NULL) {
    printf("Errore apertura\n");
    exit(1);
  }

  somma = 0;

  while (fread(&valore, sizeof(int), 1, pf) == 1) {
    // valore contiene un elemento del file
    somma = somma + valore;
  }
 
  if (fclose(pf) != 0) {
    printf("Errore chiusura file\n");
    exit(2);
  };

  printf("Somma: %d\n", somma);
  return 0;
}
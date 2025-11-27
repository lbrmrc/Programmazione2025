// stampa la somma degli interi nel file interi.txt

#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *pf;
  int valore;
  int somma; // reduce(+, 0, <contenuto di interi.dat>)

  if ((pf = fopen("interi.txt", "rt")) == NULL) {
    printf("Errore apertura\n");
    exit(1);
  }

  somma = 0;

  while (fscanf(pf, "%d", &valore) == 1) {
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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  FILE *pf;
  char parola[50];

  if ((pf = fopen("prova.txt", "w")) == NULL) {
    printf("Errore apertura\n");
    exit(1);
  }

  do {
    scanf("%s", parola);
    fprintf(pf, "%s\n", parola);
  } while (strcmp(parola, "FINE") != 0);

  if (fclose(pf) != 0) {
    printf("Errore chiusura\n");
    exit(2);
  }
}
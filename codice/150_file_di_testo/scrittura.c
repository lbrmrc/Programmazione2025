#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *pf;
  char s[] = "Ferrara";
  int d = 44122;

  pf = fopen("scritto.txt", "wt");
  if (pf == NULL) {
    printf("Errore apertura file\n");
    exit(1);
  }

  fprintf(pf, "%s\n", s);
  fprintf(pf, "%d\n", d);

  if (fclose(pf) != 0) {
    printf("Errore chiusura\n");
    exit(2);
  }
}
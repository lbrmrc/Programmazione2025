#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  FILE *pf;

  if ((pf = fopen("interi.dat", "rb")) == NULL) {
    printf("Errore apertura\n");
    exit(1);
  }

  while (fread(&n, sizeof(int), 1, pf) == 1)
    printf("%d\n", n);

  if (fclose(pf)) {
    printf("Errore chiusura\n");
    exit(2);
  }
}
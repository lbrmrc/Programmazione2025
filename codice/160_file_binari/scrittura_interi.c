#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *pf;
  int i = 12;
  int a[10] = {3, 4, 7, 8, 9, 10, -1, 2, 3, 4};

  if ((pf = fopen("interi.dat", "wb")) == NULL) {
    printf("Errore apertura file in scrittura\n");
    exit(1);
  }

  //   fwrite(&i, sizeof(int), 1, pf);
  //   fwrite(a, sizeof(int), 10, pf);
  for (i = 0; i < 10; i++)
    fwrite(&a[i], sizeof(int), 1, pf);

  if (fclose(pf) != 0) {
    printf("Errore chiusura file\n");
    exit(2);
  }

  return 0;
}
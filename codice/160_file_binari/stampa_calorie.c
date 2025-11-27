#include <stdio.h>
#include <stdlib.h>

// record
typedef struct {
  char nome[31];
  float calorie;
} Alimento;

int main() {
  Alimento r;
  FILE *pf;

  if ((pf = fopen("calorie.dat", "rb")) == NULL) {
    printf("Errore apertura file");
    exit(1);
  }

  while (fread(&r, sizeof(Alimento), 1, pf)==1){
    // r contiene un record del file
    // la sequenza dei valori di r è la sequenza dei record del file
    printf("%s %.2f\n", r.nome, r.calorie);
  }

  if (fclose(pf) != 0){
    printf("Errore chiusura file");
    exit(2);
  }
}
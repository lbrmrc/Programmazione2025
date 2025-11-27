#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char nome[31];
  float calorie;
} Alimento;

int main() {
  FILE *pf;
  Alimento r;

  float somma_calorie;
  int contatore;
  if ((pf = fopen("calorie.txt", "rt")) == NULL) {
    printf("Errore apertura\n");
    exit(1);
  }

  somma_calorie = 0.0f;
  contatore = 0;

  while (fscanf(pf, "%s%f", r.nome, &r.calorie) == 2) {
    // r contiene un record del file
    somma_calorie = somma_calorie + r.calorie;
    contatore++;
  }

  if (fclose(pf) != 0) {
    printf("Errore chiusura\n");
    exit(2);
  }

  printf("Media: %.2f\n", somma_calorie / contatore);
  return 0;
}
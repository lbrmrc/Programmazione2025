#include <stdio.h>
#include <string.h>

int main() {
  struct persona { // etichetta (tag)
    char nome[30];
    int eta;
    float stipendio;
  } giovanni;

  struct persona maria;

  strcpy(giovanni.nome, "Giovanni Rossi");
  giovanni.eta = 45;
  giovanni.stipendio = 2000.0f;

  printf("%.2f\n", giovanni.stipendio);
  maria.stipendio = 2500.0f;
}
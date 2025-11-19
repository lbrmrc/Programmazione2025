#include <stdio.h>
#include <string.h>

typedef struct {
  char nome[30];
  int eta;
  float stipendio;
} Persona;

typedef int Intero;

int main() {

  Persona giovanni;
  Persona maria;
  Persona classe[100];

  Intero i = 15;

  strcpy(giovanni.nome, "Giovanni Rossi");
  giovanni.eta = 45;
  giovanni.stipendio = 2000.0f;

  printf("%.2f\n", giovanni.stipendio);
  maria.stipendio = 2500.0f;
}
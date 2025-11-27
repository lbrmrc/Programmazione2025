#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char cognome[50];
  char nome[50];
  char sesso;
  int anno_nascita;
} Persona;

int main() {
  Persona record, giovane;
  char sesso[2];
  FILE *pf;
  int letti;

  if ((pf = fopen("people.txt", "rt")) == NULL) {
    printf("Errore apertura\n");
    exit(1);
  }

  letti = fscanf(pf, "%s%s%s%d", giovane.cognome, giovane.nome, sesso,
                 &giovane.anno_nascita);
  giovane.sesso = sesso[0];

  while (fscanf(pf, "%s%s%s%d", record.cognome, record.nome, sesso,
                &record.anno_nascita) == 4) {
    record.sesso = sesso[0];
    if (record.anno_nascita > giovane.anno_nascita)
      giovane = record;
  }

  printf("Età del più giovane: %d", 2025 - giovane.anno_nascita);

  if (fclose(pf) != 0) {
    printf("Errore chiusura\n");
    exit(2);
  }
}
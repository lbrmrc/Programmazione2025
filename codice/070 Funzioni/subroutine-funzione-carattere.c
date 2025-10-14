#include <stdio.h>

void stampa_carattere(char carattere) {
   printf("%c", carattere); 
}

void logo(char carattere) {
  stampa_carattere(carattere);
  printf("   Rubrica   ");
  stampa_carattere(carattere);
  printf("\n");
}

int main() {
  int scelta, ritorno;
  logo('*');
  printf("1. Tizio 335-1234567\n");
  printf("2. Caio 347-1234567\n");
  printf("Scegliere un contatto\n");
  scanf("%d", &scelta);
  logo('#');
  printf("Chiamata del contatto %d in corso\n", scelta);
  printf("Fine\n");
}
#include <stdio.h>

int main() {
  int m, a;
input:
  printf("Inserisci mese e anno\n");
  scanf("%d%d", &m, &a);
  if (m < 1 || m > 12) {
    printf("Errore\n");
    goto input;
  }

  if (m == 2)                                       // febbraio
    if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0) // anno bisestile?
      printf("29\n");
    else
      printf("28\n");
  else if (m == 4 || m == 6 || m == 9 || m == 11) // mese da 30 giorni?
    printf("30\n");
  else
    printf("31\n");
}
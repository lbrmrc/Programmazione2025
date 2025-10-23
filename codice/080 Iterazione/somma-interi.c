#include <stdio.h>

int main() {
  int somma; // accumulatore
  int n;     // numero richiesto all'utente
  int i;     // elemento della sequenza Si = [1, 2, ..., n]

  printf("Inserisci un numero intero\n");
  scanf("%d", &n);
  somma = 0; // inizializzazione accumulatore
  for (i = 1; i <= n; i++) {
    // i prende valori di Si = [1, 2, ..., n]
    somma = somma + i; // aggiornamento accumulatore
  }
  // somma vale la somma dei valori di Si
  printf("La somma è %d\n", somma);
}
// prodotto dei numeri pari compresi fra 1 e il numero inserito dall'utente

#include <stdio.h>

int pari(int a){
    return a %2 == 0;
}
int main() {
  int prodotto; // accumulatore
  int n;        // numero richiesto all'utente
  int i;        // elemento della sequenza Si = [1, 2, ..., n]

  printf("Inserisci un numero intero\n");
  scanf("%d", &n);
  prodotto = 1; // inizializzazione accumulatore
  for (i = 1; i <= n; i++) {
    // i prende valori di Si = [1, 2, ..., n]
    if (pari(i)) {
        // i prende i valori di Sp = filter(pari, Si)
      prodotto = prodotto * i; // aggiornamento accumulatore
    }
  }
  // somma vale la somma dei valori di Si
  printf("Il prodotto è %d\n", prodotto);
}
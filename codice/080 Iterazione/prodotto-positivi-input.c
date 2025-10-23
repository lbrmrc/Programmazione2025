#include <stdio.h>

int valore_input() {
  int n;
  scanf("%d", &n);
  return n;
}

int main() {
  int i;
  int prodotto;
  int v;
  //  risultato = reduce(*, 1, filter(>0, map(input, [0..4])))
  prodotto = 1;
  for (i = 0; i < 5; i++) {
    // i prende i valori [0, 1, 2, 3, 4]
    v = valore_input();
    if (v > 0) {
        // v prende i valori di filter(>0, map(input, [0..4]))
      prodotto = prodotto * v;
    }
  }
  printf("Il prodotto è %d\n", prodotto);
}
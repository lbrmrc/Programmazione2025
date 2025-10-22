#include <stdio.h>

int pari(int a) { return a % 2 == 0; }

int main() {
  int i;
  for (i = 1; i <= 20; i++) {
    // i assume i valori di Si = [1, 2, 3, ..., 18, 19, 20]
    if (pari(i)) {
      // i assume i valori di filter(pari, Si)
      printf("%d\n", i);
    }
  }
}
#include <stdio.h>

int palindromo(int n) {
  int o, r, t, i;
  o = n;
  r = 0;
  while (n != 0) {
    t = 0;
    for (i = 0; i < 10; i++) {
      t = t + r;
    }
    r = t + n % 10;
    n = n / 10;
  }
  return o == r;
}

int main() {
  int n;
  int s;
  int i;
  printf("Inserisci un numero intero\n");
  scanf("%d", &n);
  s = 0;
  for (i = 1; i <= n; i++) {
    // i prende i valori [1..n]
    if (palindromo(i)) {
      // i prende i valori palindromi fra 1 e n
      s = s + i;
    }
  }
  printf("%d\n", s);
}
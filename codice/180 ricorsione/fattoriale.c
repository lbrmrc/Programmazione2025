#include <stdio.h>

int fatt(int n) {
  if (n <= 1) // caso base
    return 1;
  else
    return n * fatt(n - 1); // chiamata ricorsiva
}

int main() {
  int m;
  m = fatt(5);
  printf("%d\n", m);
}
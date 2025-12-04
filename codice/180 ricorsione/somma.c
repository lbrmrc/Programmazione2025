#include <stdio.h>

int s(int N) {
  if (N == 0) // caso base
    return 0;
  else
    return N + s(N - 1); // chiamata ricorsiva
}

int main() {
  printf("%d\n", s(5));
  return 0;
}
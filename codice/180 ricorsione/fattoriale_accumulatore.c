#include <stdio.h>

int fatt(int n, int p) {
  if (n <= 1)
    return p;
  else
    return fatt(n - 1, n * p);
    // tail recursion
}

int main() {
  int m;
  m = fatt(5, 1);
  printf("%d\n", m);
}
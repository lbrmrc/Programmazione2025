#include <stdio.h>

int fatt(int n) {
  int p = 1; // accumulatore
  int i = n;
  while (i >= 1) {
    p = p * i;
    i--;
  }
  return p;
}

int main() {
  int m;
  m = fatt(5);
  printf("%d\n", m);
}
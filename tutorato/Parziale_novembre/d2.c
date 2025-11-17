#include <stdio.h>

int f(int n) {
  if (n < 10000000)
    return f(n * 3);
  else
    return 0;
}

int main(void) {
  int M;
  scanf("%d", &M);
  M = f(M);
  return M;
}
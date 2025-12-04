#include <stdio.h>

void f(int n) {
  if (n <= 5)
    printf("Fine\n"); // caso base
  else {
    printf("%d\n", n);
    f(n - 1); // tail recursion}
  }
}

int main() { f(3); }
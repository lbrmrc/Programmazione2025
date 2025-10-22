#include <stdio.h>

int doppio(int a) { return a * 2; }

int main() {
  int i;
  int j;
  for (i = 10; i >= 1; i--) {
    // i assume la seq di valori Si = 1, 2, 3, ..., 9, 10
    j = doppio(i); // Sj = map(doppio, Si)
    printf("%d\n", j);
  }
}
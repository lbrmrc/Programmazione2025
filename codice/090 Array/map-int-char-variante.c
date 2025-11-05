#include <stdio.h>
#define DIM 5

char f(int n){
    return 'A' + n;
}

int main(void) {
  int i, a[] = {2, 4, 1, 6, 2};
  char b[5];

  for (i = 0; i < DIM; i++) {
    b[i] = f(a[i]); // 'A' + a[i];
  }
  return 0;
}
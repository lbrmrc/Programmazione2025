#include <stdio.h>

int main(void) {
  int a = 0;
  do {
    if (a % 2)
      a += 2;
    else
      a += 3;
  } while (1);
  return 0;
}
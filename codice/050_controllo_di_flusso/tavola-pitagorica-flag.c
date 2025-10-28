#include <stdio.h>

int main() {
  int i;
  int j;
  int flag;
  flag = 0;
  for (i = 1; !flag && i <= 10; i++) {
    for (j = 1; !flag && j <= 10; j++) {
      printf("%3d ", i * j);
      if (i * j > 50)
        flag = 1;
    }
    printf("\n");
  }
}
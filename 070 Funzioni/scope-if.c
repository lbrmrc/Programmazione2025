#include <stdio.h>

int main(void) {
  char risposta;
  printf("Stampare?\n");
  scanf("%c", &risposta);
  if (risposta == 's') {
    int i;
    i = 10;
    printf("%d\n", i);
  }
  return 0;
}
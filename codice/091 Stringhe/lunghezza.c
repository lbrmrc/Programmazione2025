#include <stdio.h>

int lunghezza(char *s) {
  int contatore;
  contatore = 0;
  while (s[contatore] != '\0') {
    contatore++;
  }
  return contatore;
}

int main() {
  char s[81];
  scanf("%s", s);
  printf("Lunghezza: %d\n", lunghezza(s));
}
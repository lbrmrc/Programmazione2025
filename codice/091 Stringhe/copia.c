// Scrivere un programma che richieda in input una stringa, la copi in una
// seconda stringa e stampi la seconda stringa.

#include <stdio.h>

#define DIM 80

int main() {
  char s1[DIM];
  char s2[DIM];
  int i;
  printf("Inserisci la prima stringa\n");
  scanf("%s", s1);
  i = 0;
  while (s1[i] != '\0') {
    s2[i] = s1[i];
    i++;
  }
  s2[i] = '\0';
  printf("%s\n", s2);
}
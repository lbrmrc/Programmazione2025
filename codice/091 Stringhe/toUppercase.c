// legge una parola da input e la stampa tutta maiuscola
// es. "Ferrara" -> "FERRARA"

#include <stdio.h>

void toUppercase(char *s) {
  int i;
  i = 0;
  while (s[i] != '\0') {
    if (s[i] >= 'a' && s[i] <= 'z')
      s[i] = s[i] - ('a' - 'A');
    i++;
  }
}

int main() {
  char s[81];
  scanf("%s", s);
  toUppercase(s);
  printf("%s\n", s);
  return 0;
}
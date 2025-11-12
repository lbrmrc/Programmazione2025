#include <stdio.h>

int confronto(char *s1, char *s2) {
  int i;
  i = 0;
  while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    i++;
  return s1[i] - s2[i];
}

int main() {
  char s1[81], s2[81];
  int risultato_confronto;
  printf("Inserisci due parole\n");
  scanf("%s%s", s1, s2);
  risultato_confronto = confronto(s1, s2);
  if (risultato_confronto < 0)
    printf("%s precede %s\n", s1, s2);
  else if (risultato_confronto == 0)
    printf("%s e %s sono uguali\n", s1, s2);
  else
    printf("%s precede %s\n", s2, s1);
  return 0;
}
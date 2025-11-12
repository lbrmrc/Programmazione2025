#include <stdio.h>

int contenuta(char *s1, char *s2) {
  int i, j;
  int finora_uguali;
  j = 0;
  while (s2[j] != '\0') {
    i = 0;
    finora_uguali = 1;
    while (finora_uguali && s1[i] != '\0' && s2[i+j] != '\0') {
      if (s1[i] != s2[j + i])
        finora_uguali = 0;
      i++;
    }
    if (s1[i] == '\0')
        return 1;
    j++;
  }
  return 0;
}

int main() {
  char s1[81];
  char s2[81];
  scanf("%s%s", s1, s2);
  if (contenuta(s1, s2))
    printf("Contenuta\n");
  else
    printf("Non contenuta\n");
}
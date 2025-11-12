#include <stdio.h>

void concatena(char *d, char *s1, char *s2) {
  int i, j;
  i = 0;
  while (s1[i] != '\0') {
    d[i] = s1[i];
    i++;
  }
  j = 0;
  while (s2[j] != '\0') {
    d[i + j] = s2[j];
    j++;
  }
  d[i + j] = '\0';
}

int main() {
  char s1[] = "gian";
  char s2[] = "luca";
  char s3[40];
  concatena(s3, s1, s2);
  printf("%s\n", s3);
}
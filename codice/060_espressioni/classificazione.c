#include <stdio.h>

int main() {
  char a;
  scanf("%c", &a);
  if (a >= 'A' && a <= 'Z')
    printf("Maiuscola\n");
  else if (a >= 'a' && a <= 'z')
    printf("Minuscola\n");
  else if (a >= '0' && a <= '9')
    printf("Cifra\n");
  else
    printf("Altro\n");
}
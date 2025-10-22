#include <stdio.h>

int main() {
  int pin, t;
  t = 0;
  do {
    scanf("%d", &pin);
    t++;
  } while (pin != 44122 && t < 3);
  if (pin == 44122)
    printf("Accesso consentito\n");
  else
    printf("Accesso negato\n");
}
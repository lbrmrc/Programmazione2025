#include <stdio.h>

// 3, 2, 5
int main() {
  int a; // accumulatore
  int b;
  printf("Inserisci il primo intero\n");
  scanf("%d", &a);
  printf("Inserisci il secondo numero\n");
  scanf("%d", &b);
  if (b > a)
    a = b;
  printf("Inserisci il terzo numero\n");
  scanf("%d", &b);
  if (b > a)
    a = b;
  printf("%d\n", a);  
}
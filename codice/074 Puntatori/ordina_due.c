#include <stdio.h>

void swap(int *pm, int *pn) {
  int t;
  t = *pm;
  *pm = *pn;
  *pn = t;
}

void ordina(int *pa, int *pb){
    if (*pb < *pa) // nel main b < a
      swap(pa, pb); // scambio la a e la b del main
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    ordina(&a, &b);
    printf("%d %d\n", a, b);
}
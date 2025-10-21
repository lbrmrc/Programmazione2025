#include <stdio.h>

void azzera(int *pm){
    *pm = 0;
}

int main(){
    int a = 3;
    printf("%d\n", a); // stampa 3
    azzera(&a);
    printf("%d\n", a); // stampa 0
    return 0;
}
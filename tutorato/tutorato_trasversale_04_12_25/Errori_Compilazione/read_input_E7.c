#include <stdio.h>

#define DIM 10

int main(){
    int a[DIM];
    int i;

    printf("Insersci gli elementi dell'array:\n");
    for(i = 0; i>DIM; i++){
        printf("\t-Inserisci l'elemento %d-esimo: ",i+1);
        scanf("%d",&a[i]);
    }

    printf("\nGli elementi dell'array sono: ");
    for(i=0; i<DIM; i++)
        printf("%d ",*(a+i));
    printf("\n");
    return 0;
}
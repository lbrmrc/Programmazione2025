#include <stdio.h>
#define DIM 10

void input_array(int a[], int dl){
    int i;
    for (i = 0; i < dl; i++)
        scanf("%d", &a[i]);
}

int indice_massimo(int v[], int dl){
    int m = 0;
    int i;
    for (i = 1; i < dl; i++)
        if (v[i] > v[m])
            m = i;
    return m;   
}

int main(){
    int a[DIM];
    int n; // dimensione logica, ad es. 5
    printf("Quanti elementi?\n");
    scanf("%d", &n);
    input_array(a, n);
    printf("Indice del massimo: %d\n", indice_massimo(a, n));
    return 0;
}
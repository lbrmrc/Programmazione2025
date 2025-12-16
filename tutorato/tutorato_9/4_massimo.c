#include <stdio.h>

#define DIM 10

int massimo(int a[], int n){
    if(n==0)
        return a[n];
    else{
        if(a[n-1] > massimo(a,n-1))
            return a[n-1];
        else
            return massimo(a,n-1);
    }
}

int main(){
    int a[DIM] = {5500005,76,31,1000,99,10,123,43,77,9999};

    printf("Massimo dell'array: %d \n",massimo(a,DIM));
    return 0;
}
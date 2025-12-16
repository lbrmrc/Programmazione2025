#include <stdio.h>

#define DIM 10

int somma(int a[], int n){
   if(n==0)
        return 0;
    else
        return a[n-1] + somma(a,n-1);

}

int main(){
    int a[DIM] = {55,76,31,55,99,10,123,43,77,89};

    printf("La somma dell'array e: %d \n",somma(a,DIM));
    return 0;
}
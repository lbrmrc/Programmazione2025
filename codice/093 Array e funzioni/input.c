#include<stdio.h>

#define DIM 5

void input_array(int a[]){
    int i;
    for (i = 0; i < DIM; i++)
        scanf("%d", &a[i]);
}

int main(){
    int b[DIM];
    int i;
    input_array(b);
    for (i = 0; i < DIM; i++)
        printf("%d\n", *(b+i));
}
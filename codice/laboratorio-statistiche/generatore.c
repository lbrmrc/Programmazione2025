#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rnd_int(int min, int max){
    return min + rand()% (max - min + 1);
}

int main(){
    int i;
    srand(time(NULL));
    for (i = 0; i < 30; i++)
        printf("%d\n", rnd_int(0, 99));
    printf("-1\n");
    return 0;
}
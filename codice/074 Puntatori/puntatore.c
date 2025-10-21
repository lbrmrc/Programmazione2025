#include <stdio.h>

int main() {
    int a = 2;
    int *pa;

    pa = &a;
    printf("%d\n", *pa);
    *pa = 3;
    printf("%d\n", a);
}
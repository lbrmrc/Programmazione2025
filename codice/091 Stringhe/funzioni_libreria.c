#include <stdio.h>
#include <string.h>

int main(){
    char s[] = "Ferrara";
    char s2[81];
    
    strcpy(s2, s);
    printf("%s\n", s2);
    strcat(s2, "2025");
    printf("%s\n", s2);

    printf("%d\n", strlen(s2));

    printf("%d\n", strcmp("Ferrara", "Bologna"));
    printf("%d\n", strcmp("Ferrara", "Ferrara"));
    printf("%d\n", strcmp("Bologna", "Ferrara"));
}
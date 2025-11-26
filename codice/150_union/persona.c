#include <stdio.h>

typedef struct {
    char nome[51]; // 51 byte
    int eta; // 4 byte
    float stipendio; // 4 byte 
} Persona;

int main(){
    printf("%d\n", sizeof(Persona));
}
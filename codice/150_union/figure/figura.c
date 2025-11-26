#include "figura.h"

float area(Figura f){
    switch (f.tipo){
        case Quadrato:
            return f.dati.datiQuadrato.lato * f.dati.datiQuadrato.lato;
        case Rettangolo:
            return f.dati.datiRettangolo.base * f.dati.datiRettangolo.altezza;
    }
}

float perimetro(Figura f){
    switch (f.tipo){
        case Quadrato:
            return 4 * f.dati.datiQuadrato.lato;
        case Rettangolo:
            return 2 * (f.dati.datiRettangolo.base + f.dati.datiRettangolo.altezza);
    }
}


Figura quadrato(float l){
    Figura f;
    f.tipo = Quadrato;
    f.dati.datiQuadrato.lato = l;
    return f;
}

Figura rettangolo(float b, float h){
    Figura f;
    f.tipo = Rettangolo;
    f.dati.datiRettangolo.base = b;
    f.dati.datiRettangolo.altezza = h;
    return f;
}
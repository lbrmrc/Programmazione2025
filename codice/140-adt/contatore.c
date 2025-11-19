// implementazione ADT contatore

#include "contatore.h"

void reset(Contatore *pc){
    (*pc).valore = 0;
    (*pc).conta_operazioni++;
}
void inc(Contatore *pc){
    (*pc).valore++;
    (*pc).conta_operazioni++;
}
unsigned int val(Contatore c){
    return c.valore;
}
// interfaccia ADT contatore

typedef struct {
  unsigned int valore;
  int conta_operazioni;
} Contatore;

void reset(Contatore *pc);
void inc(Contatore *pc);
unsigned int val(Contatore c);
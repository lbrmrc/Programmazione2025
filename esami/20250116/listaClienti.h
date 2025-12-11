typedef struct {
  int mese;
  int anno;
  char cf[17];
  float consumo;
} Record; // elemento del file

typedef struct {
  char cf[17];
  float consumo_totale;
  float addebito_totale;
} Dato; // elemento lista

typedef struct nodo {
  Dato dato;
  struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista *pl);
void aggiorna(Lista *pl, Record r);
void stampa(Lista l);
typedef struct {
  int mese;
  int anno;
  char codicefiscale[17];
  float consumo;
} Record;

typedef struct {
  char codicefiscale[17];
  float consumototale;
  float importototale;
} Cliente;

typedef struct nodo {
  Cliente dato;
  struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista *l);
void insTesta(Lista *pl, Cliente c);
void aggiorna(Lista *pl, Record r);
void stampa(Lista l);
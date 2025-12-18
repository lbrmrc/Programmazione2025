typedef struct {
  int idPaziente;
  int ora;
  float valore;
} Temperatura;

typedef struct {
  int id;
  float sommaTemperature;
  int numeroTemperature;
  float min;
  float max;
} Paziente;

typedef struct nodo {
  Paziente dato;
  struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista *l);
void insTesta(Lista *pl, Paziente c);
void aggiorna(Lista *pl, Temperatura r);
void stampa(Lista l);
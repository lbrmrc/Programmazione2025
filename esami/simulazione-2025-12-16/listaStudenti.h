typedef struct {
  int matricola;
  char nome_esame[40];
  int giorno;
  int mese;
  int anno;
  int voto;
} Record;

typedef struct {
  int matricola;
  int somma_voti;
  int numero_esami;
} Dato; //  Dato != Record

typedef struct nodo {
  Dato dato;
  struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista *pl);
void aggiorna(Lista *pl, Record r);
void stampa(Lista l);
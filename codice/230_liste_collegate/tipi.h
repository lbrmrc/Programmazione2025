typedef int Dato; // tipo elemento

typedef struct nodo {
  Dato dato;
  struct nodo* next;
} Nodo;

typedef Nodo* Lista;
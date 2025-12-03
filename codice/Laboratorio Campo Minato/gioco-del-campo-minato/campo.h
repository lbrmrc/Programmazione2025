#define NRIGHE 2
#define NCOLONNE 3

typedef enum { Vittoria, Sconfitta, Aperto } Valutazione;

typedef struct {
  int mina;
  int coperta;
} Cella;

typedef struct {
  Cella celle[NRIGHE][NCOLONNE];
} Campo;

typedef struct {
  int riga;
  int colonna;
} Mossa;

void leggiMossa(Mossa *pm);
void inizializza(Campo *pcampo, float probmina);
void stampa(Campo *pc);
void aggiorna(Campo *pc, Mossa *pm);
Valutazione valuta(Campo *pc);
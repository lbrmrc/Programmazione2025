// Interfaccia ADT Frazione

typedef struct {
  int num;
  int den;
} Frazione;

void frazione(Frazione *pf, int n, int d);
void stampaFrazionaria(Frazione f);
void stampaDecimale(Frazione f);
void inputFrazione(Frazione *pf);
void opposto(Frazione *pf, Frazione f);
void inverso(Frazione *pf, Frazione f);
void somma(Frazione *pf, Frazione f1, Frazione f2);
void differenza(Frazione *pf, Frazione f1, Frazione f2);
void prodotto(Frazione *pf, Frazione f1, Frazione f2);
void quoziente(Frazione *pf, Frazione f1, Frazione f2);
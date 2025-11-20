// Interfaccia ADT Frazione

typedef struct {
  int num;
  int den;
} Frazione;

Frazione frazione(int n, int d);
void stampaFrazionaria(Frazione f);
void stampaDecimale(Frazione f);
Frazione inputFrazione(void);
Frazione opposto(Frazione f);
Frazione inverso(Frazione f);
Frazione somma(Frazione f1, Frazione f2);
Frazione differenza(Frazione f1, Frazione f2);
Frazione prodotto(Frazione f1, Frazione f2);
Frazione quoziente(Frazione f1, Frazione f2);
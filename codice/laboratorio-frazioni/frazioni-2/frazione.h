typedef struct {
  int num;
  int den;
} Frazione;

Frazione frazione(int n, int d);
void stampaFrazionaria(Frazione f);
void stampaDecimale(Frazione f);
Frazione inputFrazione(void);
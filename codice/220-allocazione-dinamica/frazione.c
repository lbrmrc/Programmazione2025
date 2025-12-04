typedef struct {
  int num;
  int den;
} Frazione;

Frazione *frazione(int n, int d) {
  Frazione *p;
  p = (Frazione *)malloc(sizeof(Frazione));
  p->num = n;
  p->den = d;
  return p;
}

int main() {
  Frazione *pf;
  pf = frazione(4, 3); // "new"
}
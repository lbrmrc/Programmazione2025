#include <stdio.h>

void potenza(int b, int e, int *ps) {
  int f, a;
  *ps = 1;
  for (f = 1; f <= e; f++) {
    int q = 0;
    for (a = 1; a <= b; a++)
      q = q + *ps;
    *ps = q;
  }
}

int main() {
  int M, N, i, p, s;
  scanf("%d%d", &M, &N);
  s = 0;
  for (i = 0; i <= N; i++) {
    potenza(M, i, &p);
    s = s + p;
  }
  printf("%d\n", s);
  return 0;
}
#include <stdio.h>

float a, b, c;

float parabola(float x) {
  return a * x * x + b * x + c;
}

int main() {
  float ascisse[21]; // contiene i valori [-1.0, -0.9, ..., 0.9, 1.0]
  float ordinate[21];
  int i;
  float valore;
  printf("Inserisci i parametri\n");
  scanf("%f%f%f", &a, &b, &c);
  for (i = 0; i < 21; i++) {
    ascisse[i] = -1.0f + 0.1f * i;
  }
  // ordinate = map(parabola(a,b,c), ascisse)
  for (i = 0; i < 21; i++)
    ordinate[i] = parabola(ascisse[i]);
  //  a * ascisse[i] * ascisse[i] + b * ascisse[i] + c;

  for (i = 0; i < 21; i++)
    printf("%.3f %.3f\n", ascisse[i], ordinate[i]);
  return 0;
}
#include <stdio.h>

#include "campo.h"

int main() {
  Mossa m;
  Campo campo;
  inizializza(&campo, 0.2);
  stampa(&campo);
  while (valuta(&campo) == Aperto) {
    leggiMossa(&m);
    aggiorna(&campo, &m);
    stampa(&campo);
  }
  if (valuta(&campo) == Vittoria)
    printf("Hai vinto\n");
  else
    printf("Hai perso\n");
  return 0;
}
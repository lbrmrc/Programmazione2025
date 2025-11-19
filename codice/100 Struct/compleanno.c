#include <stdio.h>

typedef struct {
  int giorno;
  int mese;
  int anno;
} Data;

typedef struct {
  char nome[20];
  Data nascita;
} Persona;

int main() {

  Data oggi;
  Persona p;
  Persona maria = {"Maria", {28, 6, 2000}};

  printf("Inserisci la data di oggi\n");
  scanf("%d%d%d", &oggi.giorno, &oggi.mese, &oggi.anno);

  printf("Inserisci nome e data di nascita\n");
  scanf("%s%d%d%d", p.nome, &p.nascita.giorno, &p.nascita.mese,
        &p.nascita.anno);

  if (oggi.giorno == p.nascita.giorno &&
      oggi.mese == p.nascita.mese) // oggi è il compleanno
    printf("Auguri %s\n", p.nome); // auguri alla persona (nome)
}
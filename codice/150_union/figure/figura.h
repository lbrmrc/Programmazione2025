typedef enum { Quadrato, Rettangolo } TipoFigura;

typedef struct {
  float lato;
} DatiQuadrato;

typedef struct {
  float base;
  float altezza;
} DatiRettangolo;

typedef union {
  DatiQuadrato datiQuadrato;
  DatiRettangolo datiRettangolo;
} DatiFigura;

typedef struct {
  TipoFigura tipo;
  DatiFigura dati;
} Figura;

float area(Figura f);
float perimetro(Figura f);
Figura quadrato(float lato);
Figura rettangolo(float b, float h);

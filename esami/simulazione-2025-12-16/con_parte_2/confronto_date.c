typedef struct {
  int giorno;
  int mese;
  int anno;
} Data;

int confronto(Data d1, Data d2) {
  int r;
  r = d1.anno - d2.anno;
  if (r != 0)
    return r;
  r = d1.mese - d2.mese;
  if (r != 0)
    return r;
  else
    return d1.giorno - d2.giorno;
}

int precede(Data d1, Data d2) {
  if (d1.anno < d2.anno)
    return 1;
  else if (d1.anno > d2.anno)
    return 0;
  else if (d1.mese < d2.mese)
    return 1;
  else if (d1.mese > d2.mese)
    return 0;
  else if (d1.giorno < d2.giorno)
    return 1;
  else
    return 0;
}
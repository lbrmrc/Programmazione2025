typedef enum { lun, mar, mer, gio, ven, sab, dom } GiornoSettimana;

int main() {
  int i;
  float pagaOraria = 25.0f;
  float paga[7], ore[7] = {5, 7, 0, 4.5, 0, 8, 6.5};
  for (i = 0; i <= 6; i++) {
    if ((i == sab) || (i == dom)) // fine settimana
      paga[i] = ore[i] * pagaOraria * 1.5;
    else
      paga[i] = ore[i] * pagaOraria;
  }
}
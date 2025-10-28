int f(int i, int j) {
  if (i > 0)
    goto b;
a:
  j--;
  if (j > 0)
    goto a;
b:
  i--;
  return i + j;
}
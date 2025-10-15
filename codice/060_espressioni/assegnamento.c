int main() {
  int a = 5;
  float f = 6.6;
  char c = 4;
  c--;
  f = a + f;
  a = a % c;
  a = f * c; // f*c vale 34.8, a vale 34
}
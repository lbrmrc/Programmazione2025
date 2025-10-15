#include <stdio.h>

int main() {
  char c1; // con segno
  unsigned char c2 = 127; // senza segno
  c1 = 127;
  c1++; // vale -128
  c1--; // vale 127
  c2++; // vale 128
  c2 = 255; 
  c2++; // vale 0
  c2--; // vale 255
}
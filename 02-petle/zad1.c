#include <stdio.h>
#include <math.h>

int main() {
  int zakres=10;
  int wynik=1;
  int potega=1;

  while (potega<=zakres) {
    wynik=2*wynik;
    printf("%d\n", wynik);
    potega++;
  }
}

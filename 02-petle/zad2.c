#include <stdio.h>

int main() {

int LiczbaWierszy = 8, LiczbaKolumn = 16;
int Wiersz = 1, Kolumna;
int Pozycja;

while (Wiersz <= LiczbaWierszy) {
  Kolumna = 1;
  while (Kolumna <= LiczbaKolumn) {
    Pozycja = Wiersz + Kolumna;
    if (Pozycja % 2 == 0) {
      printf("*");
    }
    else {
      printf(" ");
    }
    Kolumna++;
  }
  printf("\n");
  Wiersz++;
}
}

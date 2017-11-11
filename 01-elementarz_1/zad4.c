// Program oblicza silnię z odanej liczby

#include <stdio.h>

int main() {

int liczba;
int wynik=1;

  printf("Podaj liczbe: ");
  scanf("%i", &liczba);

  for (int i = 1; i < liczba+1; i++) {
    wynik = wynik * i;
  }
  printf("\nSilnia z %i=%i\n", liczba, wynik);
  return 0;
}

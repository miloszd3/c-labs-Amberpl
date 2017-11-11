// Program oblicza silnię z odanej liczby

#include <stdio.h>

int main() {

int liczba=0;
int wynik=0;

  printf("Podaj liczbe: ");
  scanf("%i", &liczba);

  for (int i = 0; i < liczba; i++) {
    wynik = wynik + liczba;
  }

  printf("\nSilnia z %i=%i\n", liczba, wynik);
  return 0;
}

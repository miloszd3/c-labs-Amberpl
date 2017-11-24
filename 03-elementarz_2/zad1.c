#include <stdio.h>

int M, n;
int suma = 0;
int i = 1;

int main() {

  printf("Podaj liczbe M: ");

  scanf("%i", &M);
  while (suma < M) {
     suma=suma+i;
     i=i+1;
  }
  n=i-1;
  printf("Szukane n to: %i", n);
  return 0;
}

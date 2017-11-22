#include <stdio.h>

float liczby[6];
float najwieksza, najmniejsza;
int i=1, j;

int main() {
  printf("Podj szesc liczb rzeczywistych:\n");
  while (i<=6) {
    printf("liczba [%i]=", i);
    scanf("%f", &liczby[i-1]);
    i++;
  }

  printf("\nWprowadzone liczby to:\n");
  for (j = 0; j < 6; j++) {
    printf("%.3f ", liczby[j]);
  }
  najwieksza = liczby[0];
  for (j = 0; j < 6; j++) {
    if (najwieksza<liczby[j]) {
      najwieksza=liczby[j];
    }
  }
  printf("\n\nNajewieksza liczba ze zbioru to: %.3f\n", najwieksza);

  najmniejsza = liczby[0];
  for (j = 0; j < 6; j++) {
    if (najmniejsza>liczby[j]) {
      najmniejsza=liczby[j];
    }
  }
  printf("Najmniejsza liczba ze zbioru to: %.3f\n", najmniejsza);
}

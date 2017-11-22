#include <stdio.h>

float liczby[6];
float najwieksza;
int i=1, j;

int main() {
  printf("Podj szesc liczb calkowitych:\n");
  while (i<=6) {
    printf("liczba [%i]=", i);
    scanf("%f", &liczby[i-1]);
    i++;
  }

  printf("\nWprowadzone liczby to:\n");
  for (j = 0; j < 6; j++) {
    printf("%f ", liczby[j]);
  }
  najwieksza = liczby[0];
  for (j = 0; j < 6; j++) {
    if (najwieksza<liczby[j]) {
      najwieksza=liczby[j];
    }
  }
  printf("\n\nNajewieksza liczba ze zbioru to: %f\n", najwieksza);
}

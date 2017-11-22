#include <stdio.h>

float liczby[5];
int dodatnie;
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
    for (j = 0; j < 6; j++) {
    if (liczby[j]>0) {
      dodatnie++;
    }
  }
  printf("\n\nIlosc liczb dodatnich w zbiorze: %i\n", dodatnie);
}

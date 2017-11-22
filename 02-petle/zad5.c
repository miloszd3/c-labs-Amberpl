#include <stdio.h>

int liczby[6];
int i=1, j;

int main() {
  printf("Podj szesc liczb calkowitych:\n");
  while (i<=6) {
    printf("liczba [%i]=", i);
    scanf("%i", &liczby[i-1]);
    i++;
  }

  printf("\nWprowadzone liczby to:\n");
  for (j = 0; j < 6; j++) {
    printf("%i ", liczby[j]);
  }
} 

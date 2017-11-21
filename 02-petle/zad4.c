// Program wylicza sumę od 1 o n podaną rzez użytkownika

#include <stdio.h>

int a=0, suma=0;
int i;

int main() {
  while (a <= 1) {
    printf("Podaj liczbe do ktorej ma byc obliczona suma: \n a= ");
    scanf("%d", &a);

    if (a > 1) {
      i = 1;
      while (i <= a){
        suma = suma + i;
        i++;
      }
        printf("Suma od 1 do %d wynosi: %d\n",a, suma);
    }
    else {
      printf("Sprobuj jeszcze raz a musi byc wieksza od 1. \n\n");
    }
  }
}

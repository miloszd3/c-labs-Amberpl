#include <stdio.h>

int i;
int a=0, b=0;

int main() {
  while (a >= b) {
    printf("Podaj pierwsza liczbe: \n a= ");
    scanf("%d", &a);
    printf("Podaj druga liczbe: \n b= ");
    scanf("%d", &b);

    if (a<b) {
      for (i = a; i <= b; i++) {
        printf("%d\n", i);
      }
    }
    else if (a>b)
      printf("Sprobuj jeszcze raz a > b. \n\n");
    else {
      printf("Sprobuj jeszcze raz a = b. \n\n");
    }
  }
}

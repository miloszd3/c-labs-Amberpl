#include <stdio.h>

int i;
int a=0, b=0;

int main() {
  printf("Podaj pierwsza liczbe: \n a= ");
  scanf("%d", &a);
  printf("Podaj druga liczbe: \n b= ");
  scanf("%d", &b);

  if (a<b) {
    for (i = a; i <= b; i++) {
      printf("%d\n", i);
    }
  }
}

#include <stdio.h>

int main() {

  int i, n, jest_pierwsza;

  printf("Podaj liczbe calkowita: ");
  scanf("%i", &n);

  for (i = 2; i*i <= n; i++) {
    if (n%i == 0) {
      jest_pierwsza = 0;
    }
    else jest_pierwsza = 1;
  }

  printf("Podana liczba '%d' jest %s\n", n, jest_pierwsza ? "pierwsza" : "złożona");
}

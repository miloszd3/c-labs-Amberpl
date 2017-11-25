#include <stdio.h>
int main() {
  int n,jest_pierwsza,i;

  printf("Podaj liczbe calkowita: ");
  scanf("%d", &n);
   for (i = 2; i*i <= n; i++) {
   if (n%i == 0)
   jest_pierwsza = 0;
  }
 printf("Podana liczba '%d' jest %s\n", n, jest_pierwsza ? "pierwsza" : "złożona");
}

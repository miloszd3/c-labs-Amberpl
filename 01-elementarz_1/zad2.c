/* Program ten wypisuje liczby z tablicy tabela[]
   w odwrotnej kolejności: 12, 6, 4, 2, 1 */
#include <stdio.h>
int main() {
   int tabela[] = {1, 2, 4, 6, 12};
   for (int i=0; i < 5; i++) {
    printf("%i ", tabela[4-i]);
    }
   return 0;
}

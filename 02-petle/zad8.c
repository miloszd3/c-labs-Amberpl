#include "stdio.h"

int i, j;

int main() {
  for (i = 1; i < 5; i++) {
    for (j = 0; j < i; j++) {
      putchar(42);
    }
    printf("\n");
  }
}

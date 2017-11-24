#include "stdio.h"
// Wszytkie figury

int i, j, k;

int main() {
  for (i = 1; i < 5; i++) {
    for (j = 0; j < i; j++) {
      putchar(42);
    }
    for (k = i; k < 8; k++) {
      putchar(32);
    }
    for (j = i; j < 5; j++) {
      putchar(42);
    }
    for (k = 0; k < i+1; k++) {
      putchar(32);
    }
    for (k = 0; k < i+1; k++) {
      putchar(32);
    }
    for (k = i; k < 5; k++) {
      putchar(42);
    }
    for (k = i; k < 8; k++) {
      putchar(32);
    }
    for (j = 0; j < i; j++) {
      putchar(42);
    }
    printf("\n");
  }
}

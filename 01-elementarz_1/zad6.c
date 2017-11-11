#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// program liczy pierwiastki równania a*x^2+b*x+c=0

int main() {

  double a[4];

// Wprowadzanie danych
  for (int i = 1; i < 4; i++) {
    printf("Podaj a[%d] = ", i);
    scanf("%lf", &a[i]);
  }

  double delta = a[2] * a[2] - 4 * a[1] * a[3];

  double x1 = (-a[2] - sqrt(delta))/(2*a[1]);
  double x2 = (-a[2] + sqrt(delta))/(2*a[1]);

for (int j = 1; j < 4; j++) {
  if (a[j]==1) {
    printf("a[%i] = %f\n", j, a[j] );
  }
  else {
    printf("TEST\n");
  }
}

  printf("x1 = %.3f\n", x1);
  printf("x2 = %.3f\n\n", x2);
}

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

  printf("Delta %.2f\n\n", delta);

  printf("%.1f*x^2 + %.1f*x + %.1f = 0\n\n", a[1] , a[2], a[3]);

  printf("x1 = %.3f\n", x1);
  printf("x2 = %.3f\n\n", x2);
}

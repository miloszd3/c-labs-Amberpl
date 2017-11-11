#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// program liczy pierwiastki równania a*x^2+b*x+c=0

int main(int argc, char const *argv[]) {
  printf("argc: %d\n", argc);
  printf("argv[0] %s\n", argv[0]);
  printf("argv[1] %s\n", argv[1]);
  printf("argv[2] %s\n", argv[2]);
  printf("argv[3] %s\n", argv[3]);

  double a = atof(argv[1]);
  double b = atof(argv[2]);
  double c = atof(argv[3]);

  double delta = b * b - 4 * a * c;

  double x1 = (-b - sqrt(delta))/(2*a);
  double x2 = (-b + sqrt(delta))/(2*a);

  printf("Delta %f\n", delta);

  printf("%.1f*x^2 1+ %.1f*x + %.1f = 0\n", a , b, c);

  printf("x1 = %f\n", x1);
  printf("x2 = %f\n", x2);
}

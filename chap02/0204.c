#include <stdio.h>

int main(void)
{
  int n;
  double d;

  n = 7;
  d = 6.5;

  printf("9 * 8.5 = %f\n", 9 * 8.5);
  printf("9 * n = %d\n", 9 * n);
  printf("9 * d = %f\n", 9 * d);
  printf("8.5 * n = %f\n", 8.5 * n);
  printf("8.5 * d = %f\n", 8.5 * d);
  printf("n * d = %f\n", n * d);
  printf("9 / 8.5 = %f\n", 9 / 8.5);
  printf("9 / n = %d\n", 9 / n);
  printf("9 / d = %f\n", 9 / d);
  printf("8.5 / n = %f\n", 8.5 / n);
  printf("8.5 / d = %f\n", 8.5 / d);
  printf("n / d = %f\n", n / d);

  return 0;
}
#include <stdio.h>
 int main()
{
  double x, y, power;
  printf("Enter base: ");
  scanf("%ld", &x);
  printf("Enter exponent: ");
  scanf("%ld", &y);
  power = pow(x, y);
 printf("x ^ y = %ld", power);
 return 0;
} 

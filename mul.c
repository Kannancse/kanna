#include <stdio.h>
int main()
{
 int a, i, r;
 printf("Enter an integer: ");
 scanf("%d",&a);
 printf("Enter the range: ");
 scanf("%d", &r);
 for(i=1; i <= r; ++i)
 {
  printf("%d * %d = %d \n", a, i, a*i);
 }
 return 0;
}

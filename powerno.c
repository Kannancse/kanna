#include<stdio.h>
int main()
{
    int i=1, a, b, ans=1;
    printf("Enter x and power n \n");
    scanf("%d \n %d", &a, &b);

    while (i<=b)
      {
         ans = ans*a;
         i = i+1;
      }

    printf("%d to the power %d is %d", a, b, ans);
    return 0;
}

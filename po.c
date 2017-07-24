#include<stdio.h>
int main()
{
int r=1,base,exp;
printf("enter the base and exponential value");
scanf("%d %d",&base,&exp);
while( exp != 0)
{
r = r * base;
exp--;
}
printf("the power of number value is %d",r);
return 0;
}

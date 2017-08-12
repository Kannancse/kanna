#include<stdio.h>
int main()
{
int num,temp=0,r,old;
printf("enter the number");
scanf("%d",&num);
old=num;
while(num!=0)
{
r=num%10;
temp+=r*r*r;
num=num/10;
}
if(old==num)
{
printf("armstrong");
}
else
{
printf("not armstrong");
}
return 0;
}

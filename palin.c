#include<stdio.h>
int main()
{
int num,n,r;
printf("Enter any number to check palindrome: ");
scanf("%d", &n);
num=n;
while ( n != 0 )
{
 r=(r*10)+(n%10);
 n=n/10;
 }
if(r == num)
{
 printf("%d is palindrome.", num);
}
else
{
printf("%d is not palindrome.", num);
}
return 0;
} 



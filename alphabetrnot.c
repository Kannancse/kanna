#include<stdio.h>
int main()
{
char ch;
printf("enter the character");
scanf("%c",&ch);
if((ch >= 'a'|| ch <= 'z') || (ch >= 'A' || ch <= 'Z'))
{
printf("%ch is a alphabet",ch);
}
else
{
printf("%ch is not a alphabet",ch);
}
return 0;
}

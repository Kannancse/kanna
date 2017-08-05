#include <stdio.h>
int main()
{
   int num, rev_num=0, r,temp;
   printf("Enter an integer: ");
   scanf("%d", &num);
 temp=num;
   while(temp!=0)
   {
      remainder=temp%10;
      rev_num=rev_num*10+r;
      temp/=10;
   } 
   if(rev_num==num) 
      printf("%d is a palindrome number",num);
   else
      printf("%d is not a palindrome number",num);
   return 0;
}

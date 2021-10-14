#include<stdio.h>
int main()
{
   int num,sum=0,rem,temp;

   printf("\nEnter a number: ");
   scanf("%d",&num);
   temp = num;

   while (num != 0)
   {
      rem = num % 10;
      sum = sum + (rem*rem*rem);
      num = num / 10;
   }

   if(temp == sum)
      printf("%d is an Armstrong Number",temp);
   else
      printf("\n%d is not an Armstrong Number",temp);
   return(0);
}
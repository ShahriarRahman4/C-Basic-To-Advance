#include<stdio.h>
int main()
{
   
   int num1,num2,num3,sum;
   float average;

   printf("Enter three number :");
   scanf("%d %d %d",&num1,&num2,&num3);
   sum = num1+num2+num3;

   average = (float)sum/3;

   printf("Average = %f",average);
   

    return 0;
}
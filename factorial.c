#include<stdio.h>
int main()
{
 int num;
 int fact=1;
 printf("Enter any number :");
 scanf("%d",&num);

 for(int i=1;i<=num;i++)
 {
    fact=fact*i;
 }
printf("Factorial = %d",fact);







    return 0;
}
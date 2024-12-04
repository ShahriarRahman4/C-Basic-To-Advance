#include<stdio.h>
int main()
{
  int num1,num2,rem;
  int gcd,lcm;
 
  printf("Enter two numbers");
  scanf("%d %d",&num1,&num2);
 int temp1=num1;
 int temp2=num2;

  while(temp2!=0)
  {
   rem=temp1%temp2;
   temp1=temp2;
   temp2=rem;
  }

gcd=temp1;

printf("GCD = %d\n",gcd);

lcm=num1*num2/gcd;

printf("LCM = %d\n",lcm);



    return 0;
}
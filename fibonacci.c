#include<stdio.h>
int main()
{
int num1=0,num2=1;
int limit;
int fibo=0;
printf("Enter the limit : ");
scanf("%d",&limit);
nprintf("Fibonacci sequence up to %d:\n", limit);
printf("%d %d ",num1,num2);
while(fibo<limit)
{
fibo=num1+num2;
if(fibo>limit)
{
break;
}
printf("%d ",fibo);
num1=num2;
num2=fibo;
}

return 0;
}
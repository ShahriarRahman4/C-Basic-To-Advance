#include<stdio.h>

void calculateFibo(int limit)
{
    int num1=0,num2=1,fibo;
    int temp1,temp2;

    temp1=num1;
    temp2=num2;

    printf("%d %d ",num1,num2);

    for(int i=3 ;i<=limit ;i++)
    {
        fibo=temp1+temp2;
        temp1=temp2;
        temp2=fibo;
        printf("%d ",fibo);
    }
}

int main()
{  

    int limitValue;
    printf("Enter parameter :");
    scanf("%d",&limitValue);
    calculateFibo(limitValue);
}
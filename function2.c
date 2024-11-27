#include<stdio.h>
void sum(int x,int y)
{
    int s = x+y;
    printf("sum = %d",s);
}

int main()
{
    int num1,num2;
    printf("Enter two numbers :");
    scanf("%d %d",&num1,&num2);

    sum(num1,num2);
}
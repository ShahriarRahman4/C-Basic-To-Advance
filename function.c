#include<stdio.h>

int sum(int x, int y)
{
    return x+y;
}

int main()
{
    int num1,num2;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);
    int result= sum(num1,num2);

    printf("%d",result);
}
#include<stdio.h>

void caluculatePower(int x,int y)
{
    int result=1;
    for(int i=1;i<=y;i++)
    {
        result=result*x;

    }
    printf("Result =%d",result);
}

int main()
{
    int base,expo;
    printf("Enter the base value : ");
    scanf("%d",&base);

    printf("Enter the exponent value : ");
    scanf("%d",&expo);

    caluculatePower(base,expo);
}
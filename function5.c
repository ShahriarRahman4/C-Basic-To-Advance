#include<stdio.h>

void caluculatePower(int base,int expo)
{
    int result=1;
    for(int i=1;i<=expo;i++)
    {
        result=result*base;

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
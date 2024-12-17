#include<stdio.h>

void calculateDigit(int num)
{
    int count=0;
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    printf("Digit = %d",count);

}

int main()
{
    int x;
    printf("Enter any integer :");
    scanf("%d",&x);
    calculateDigit(x);

    return 0;
}
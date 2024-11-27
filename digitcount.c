#include<stdio.h>
int main()
{
    int number;
    int count=0;
    printf("Enter any number : ");
    scanf("%d",&number);

    while(number!=0)
    {
        number=number/10;
        count++;
    }

    printf("Digits : %d",count);
}
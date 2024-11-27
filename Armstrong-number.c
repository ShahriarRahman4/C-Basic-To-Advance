#include<stdio.h>
int main()
{
    int num,sum=0;
    int rem;

    printf("Enter any number :");
    scanf("%d",&num);

    int temp = num;

    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }

    if(num==sum)
    {
        printf("Armstrong number");

    }
    else
    {
        printf("Not a armstrong number ");

    }
    return 0;
}
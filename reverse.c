#include<stdio.h>
int main()
{
int num,reverse=0;
int rem;

printf("Enter any number ");
scanf("%d",&num);
int temp = num;

while(temp!=0)
{
    rem=temp%10;
    reverse=reverse*10+rem;
    temp=temp/10;
}


printf("Reverse = %d",reverse);




    return 0;
}
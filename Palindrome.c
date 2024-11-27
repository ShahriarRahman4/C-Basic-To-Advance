#include<stdio.h>
int main()
{
    int num,rev=0;
    int rem;
    printf("Enter any number :");
    scanf("%d",&num);

    int temp=num;
    
    while(temp!=0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }

    if(num==rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}
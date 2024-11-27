#include<stdio.h>
int main()
{
    int num;
    printf("Enter your mark :");
    scanf("%d",&num);
    if(num>100)
    {
        printf("Invalid number ");
        
    }
     if(num<0)
    {
        printf("Invalid number ");
        
    }
    else if(num>=80 && num<=100)
    {
        printf("A+");
    }
    else if(num>=70)
    {
        printf("A");
    }
    else if(num>=60)
    {
        printf("A-");
    }
    else if(num>=50)
    {
        printf("B");
    }
    else if(num>=40)
    {
        printf("A+");
    }
    else
    {
        printf("Fail");
    }

    return 0;
    }
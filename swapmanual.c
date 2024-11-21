#include<stdio.h>
int main()
{
    int num1=10;

    int num2=20;
    int temp;

    temp=num1;
    num1=num2;
    num2=temp;

    printf("%d %d",num1,num2);

 


    return 0;
}
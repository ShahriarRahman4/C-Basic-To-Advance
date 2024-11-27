#include<stdio.h>

void calculatesqure(int x)
{
    int s = x*x;
    printf("Squre = %d",s);
}

int main()
{
    int num;
    printf("Enter any number ");
    scanf("%d",&num);

    calculatesqure(num);
}
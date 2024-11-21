#include<stdio.h>
int main()
{
    char ch;

    printf("Enter any letter :");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
    {
        printf("Lower Case");

    }
    else if(ch>='A' && ch<='Z')
    {
        printf("Upper Case");
    }
    else
    {
        printf("Invalid Case ");
    }
    return 0;
}
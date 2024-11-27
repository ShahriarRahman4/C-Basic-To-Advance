#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter the value of n");
    scanf("%d",&n);
    char ch='A';
    
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c",ch);
            ch=ch+1;
        }
        printf("\n");
        ch='A';
    }
    
       for(row=n-1;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c",ch);
            ch=ch+1;
        }
        printf("\n");
        ch='A';
    }
    
    
}

#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter the value of n ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            printf(" ");

        }
        for(col=1;col<=row*2;col++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(row=n-1;row>=1;row--)
    {
        for(col=1;col<=n-row;col++)
        {
            printf(" ");
        }
        for(col=1;col<=row*2-1;col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
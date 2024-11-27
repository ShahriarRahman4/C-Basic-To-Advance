#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter value for n :");
    scanf("%d",&n);
    char ch = 'H';

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            printf(" ");

        }
        for(col=1;col<=2*row-1;col++)
        {
            printf("%c",ch);
           
        }
        printf("\n");
        
    }
}
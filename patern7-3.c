#include<stdio.h>
int main()
{
 int row,col,n;
 printf("Enter the value of n :");
 scanf("%d",&n);
 int x=1;

 for(row=1;row<=n;row++)
 {
    for(col=1;col<=n;col++)
    {
        printf("%d",x);

    }
    printf("\n");
    x=x+1;
 }


    return 0;
}
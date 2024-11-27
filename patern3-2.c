#include<stdio.h>
int main()
{
  
int n,row,col;
printf("Enter the value of n:");
scanf("%d",&n);

int x=1;

for(row=1;row<=n;row++)
{
    for(col=1;col<=row;col++)
    {
        printf("%d",x);
       
    }
    printf("\n");
     x=x+1;
}
n=3;
x=2;
for(row=n-1;row>=1;row--)
{
    for(col=1;col<=row;col++)
    {
        printf("%d",x);
       
    }
    printf("\n");
    x=x+1;
}


    return 0;
}
#include<stdio.h>
int main()
{
  int row,col,n;
  printf("Enter the value of n");
  scanf("%d",&n);
  int x=1;
  for(row=1;row<=n;row++)
  {
    for(col=1;col<=n-row;col++)
    {
        printf(" ");
    }
   for(col=1;col<=row;col++)
   {
    printf("%d",x);
    x=x+1;
   }
   printf("\n");
   x=1;

  }

  for(row=n;row>=1;row--)
  {
    for(col=1;col<=n-row;col++)
    {
      printf(" ");
    }
    for(col=1;col<=row;col++)
    {
        printf("%d",x);
        x=x+1;
    }
    printf("\n");
    x=1;
  }




    return 0;
}
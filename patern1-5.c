#include<stdio.h>
int main()
{
int row,col,n;
char ch = 'A';

printf("Enter the value of n :");
scanf("%d",&n);

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


    return 0;
}
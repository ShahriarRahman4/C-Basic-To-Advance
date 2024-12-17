#include<stdio.h>
int main()
{
 int row1,col1,row2,col2;
 int i,j;
 printf("Enter size for row for matrix 1 :");
 scanf("%d",&row1);

 printf("Enter size for col for matrix 1 :");
 scanf("%d",&col1);

printf("Enter size for row for matrix 2 :");
 scanf("%d",&row2);

 printf("Enter size for col for matrix 2 :");
 scanf("%d",&col2);
int matrix1[row1][col1];
int matrix2[row2][col2];
int result=0;

printf("Enter value for matrix1 : \n");

for(i=0;i<row1;i++)
{
    for(j=0;j<col1;j++)
    {
       printf("elment[%d][%d] :",i,j);
       scanf("%d",&matrix1[i][j]);
    }
}

printf("Enter value for matrix2 : \n");

for(i=0;i<row2;i++)
{
    for(j=0;j<col2;j++)
    {
       printf("elment[%d][%d] :",i,j);
       scanf("%d",&matrix2[i][j]);
    }
}

for(i=0;i<row1;i++)
{
    for(j=0;j<col1;j++)
    {
       result=result+matrix1[i][j]*matrix2[i][j];
    }
}

printf("Result =  %d",result);


    return 0;
}
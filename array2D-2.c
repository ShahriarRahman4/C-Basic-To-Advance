#include<stdio.h>
int main()
{
int size=5;

int matrix[size][size];
int max=0,row=0;

printf("Input 2D array (%dX%d) row by row using 0 and 1 : \n",size,size);
for(int i = 0;i < size; i++ )
{
    int count=0;
    for(int j=0;j<size;j++)
    {
      scanf("%d",&matrix[i][j]);
      if(matrix[i][j]==1)
      {
        count++;
      }
    }

    if(count>max)
    {
        max=count;
        row=i;
        
    }
}


printf("The index of the row with the maximum number of 1s is: %d\n", row);
    




    return 0;
}
#include<stdio.h>
int main()
{
int size;
int sum=0;
printf("Input the size of the square matrix :");
scanf("%d",&size);

int matrix[size][size];

for(int i=0;i<size;i++)
{
  for(int j=0;j<size;j++)
  {
    printf(" element-[%d],[%d]:",i,j);
    scanf("%d",&matrix[i][j]);
    if(i==j)
    {
      sum=sum+matrix[i][j];
    }
  }
}

printf("The matrix is :\n");
for(int i=0;i<size;i++)
{
  for(int j=0;j<size;j++)
  {
   printf("%d ",matrix[i][j]);
  }
  printf("\n");
}
 
printf("Addition of the left Diagonal elements is : %d",sum);

    return 0;
}
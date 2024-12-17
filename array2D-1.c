#include<stdio.h>
int main()
{
    int size;
    printf("Input the size of the square matrix :");
    scanf("%d",&size);

    if(size>=5)
    {
        printf("Size must be less then 5");
        return 1;
    }

   int matrix1[size][size],matrix2[size][size],sum[size][size];
   printf(" Input elements in the first matrix :\n");
   for(int i=0;i<size;i++)
   {
    for(int j=0;j<size;j++)
    {
        printf("element -[%d][%d] :",i,j);
        scanf("%d",&matrix1[i][j]);

    }
   }
   printf(" Input elements in the second matrix :\n");
   for(int i=0;i<size;i++)
   {
    for(int j=0;j<size;j++)
    {
        printf("element -[%d][%d] :",i,j);
        scanf("%d",&matrix2[i][j]);
        
    }
   }
   

   for(int i=0;i<size;i++)
   {
    for(int j=0;j<size;j++)
    {
        sum[i][j]=matrix1[i][j]+matrix2[i][j];
          
    }
   }
    printf(" The First matrix is :\n");
    for(int i=0;i<size;i++)
   {
    for(int j=0;j<size;j++)
    {
        
        printf("%d ",matrix1[i][j]);
        
    }
    printf("\n");
   }
   printf(" The Second matrix is :\n");
    for(int i=0;i<size;i++)
   {
    for(int j=0;j<size;j++)
    {
        
        printf("%d ",matrix2[i][j]);
    }
    printf("\n");
   }

   printf("The Addition of two matrix is:\n");
     for(int i=0;i<size;i++)
   {
    for(int j=0;j<size;j++)
    {
        
        printf("%d ",sum[i][j]);

    }
    printf("\n");
   }

return 0;
    
}
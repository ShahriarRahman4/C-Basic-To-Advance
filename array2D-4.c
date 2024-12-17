#include<stdio.h>
int main()
{ 

    int n;
    printf("Enter the size of the 2D array : ");
    scanf("%d",&n);

    int array[n][n];
    int i,j;
    int sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter value for[%d][%d] : ",i,j);
            scanf("%d",&array[i][j]);
        }
    }

      for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(array[i][j]%4==0 || array[i][j]%7==0)
            {
                sum=sum+array[i][j];
            }

        }
    }

  printf("Sum = %d",sum);


    return 0;
}
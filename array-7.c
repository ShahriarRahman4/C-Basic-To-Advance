#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of the array :");
    scanf("%d",&n);
    
    float array[n];
    float max,min;
    
    for(int  i=0;i<n;i++)
    {
        printf("Enter value for array[%d] :",i);
        scanf("%f",&array[i]);
    }
    max=array[0];
    min=array[0];
    
       for(int  i=0;i<n;i++)
    {
        if(array[i]>array[0])
        {
            max=array[i];
        }
    }
           for(int  i=0;i<n;i++)
    {
        if(array[i]<array[0])
        {
            min=array[i];
        }
    }
    printf("Maximum value = %.2f\n",max);
    printf("Minimum value = %.2f\n",min);
    
    return 0;
}
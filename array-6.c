#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of the array :");
    scanf("%d",&n);
    
    int array[n];
    int arrayeven[n];
    int arrayodd[n];
    int evencount=0;
    int oddcount=0;
    int i;
    
    for( i=0;i<n;i++)
    {
        printf("Enter value for array[%d] :",i);
        scanf("%d",&array[i]);
    }
  
    
       for(  i=0;i<n;i++)
    {
        if(array[i]%2==0)
        {
           arrayeven[evencount++]=array[i];
        }
        else
        {
            arrayodd[oddcount++]=array[i];
        }
    }  
    for(i=0;i<evencount;i++)
    {
        printf("Even value :%d\n",arrayeven[i]);
    }
        for(i=0;i<oddcount;i++)
    {
        printf("Odd value :%d\n",arrayodd[i]);
    }
    
    return 0;
}
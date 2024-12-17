#include<stdio.h>
int main()
{
int n;
printf("Enter number of elements : ");
scanf("%d",&n);
int array[n];
int i;
printf("Enter %d elements in the array : \n",n);
for(i=0;i<n;i++)
{
    printf("element-%d: ",i);
    scanf("%d",&array[i]);
}
printf("The Even elements are : \n");
for(i=0;i<n;i++)
{
    if(array[i]%2==0)
    {
       printf("%d ",array[i]);
        
    }
}
printf("\nThe Odd elements are : \n ");
for(i=0;i<n;i++)
{
    if(array[i]%2!=0)
    {
       printf("%d ",array[i]);
        
    }
}

                          
    return 0;
}
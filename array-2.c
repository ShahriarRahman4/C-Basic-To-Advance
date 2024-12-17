#include<stdio.h>
int main()
{
int n;
printf("Enter number of elements :");
scanf("%d",&n);
int array[n];
int i;
printf("Enter %d elements in the array :\n ",n);
for(i=0;i<n;i++)
{
    printf("element-%d: ",i);
    scanf("%d",&array[i]);
}
int max=array[0];
int min=array[0];
for(i=0 ;i<n;i++)
{
    if(max<array[i])
    {
        max=array[i];
    }
    if(min>array[i])
    {
        min=array[i];
    }
}


printf("Maximum element is : %d\n",max);
printf("Minimum element is : %d",min);



    return 0;
}
#include<stdio.h>
int main()
{
int n;
printf("Enter number of elements :");
scanf("%d",&n);
int array[n];
int count=0;
printf("Enter %d elements in the array :\n ",n);
for(int i=0;i<n;i++)
{
    printf("element-%d: ",i);
    scanf("%d",&array[i]);
}
for(int i=0;i<n;i++)
{
    for(int j = i+1 ; j<n; j++)
    {
        if(array[i]==array[j])
        {
            count++;
            break;
        }
    }
}

printf("Total number of duplicate elements found in the array is : %d",count);


    return 0;
}
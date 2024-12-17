#include<stdio.h>
int main()
{
int n;
int newp,newv;
int i;

printf("Enter number of elements :");
scanf("%d",&n);
int array[n];
printf("Enter %d elements in the array : \n",n);
for(i=0;i<n;i++)
{
    printf("element-%d: ",i);
    scanf("%d",&array[i]);
}
printf("Input the value to be inserted :");
scanf("%d",&newv);
printf("Input the value position to be inserted :");
scanf("%d",&newp);
newp=newp-1;

for(i=n-1;i>=newp;i--)
{
    array[i+1]=array[i];
}
array[newp]=newv;

n++;

for(i=0;i<n;i++)
{
    printf("element-%d: %d\n",i,array[i]);
    
}

    return 0;
}
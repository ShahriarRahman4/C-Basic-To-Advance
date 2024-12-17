/*Enter the limit :10
2 + 4 + 6 + 8 + 10  = 30*/
#include<stdio.h>
int main()
{

 int n;
 int sum=0;
 printf("Enter the limit :");
 scanf("%d",&n);
 if(n%2!=0)
 {
    n=n-1;
 }
for(int i=2 ;i<=n ;i=i+2)
{
    if(i==n)
    {
        printf("%d ",i);
    }
    else
    {
        printf("%d + ",i);
    }
    sum=sum+i;
}

printf(" = %d",sum);


    return 0;
}
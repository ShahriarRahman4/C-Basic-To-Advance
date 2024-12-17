
/*Enter the limit :10
1.00 + 0.50 + 0.33 + 0.25 + 0.20 + 0.17 + 0.14 + 0.13 + 0.11 + 0.10  = 55.00*/
#include<stdio.h>
int main()
{

int n;
float sum=0;
printf("Enter the limit :");
scanf("%d",&n);

for(float i=1 ; i<=n ; i++)
{
    if(n==i)
    {
        printf("%.2f",1/i);
    }
    else
    {
        printf("%.2f + ",1/i);
    }
    sum=sum+i;
}

printf("  = %.2f",sum);







    return 0;
}
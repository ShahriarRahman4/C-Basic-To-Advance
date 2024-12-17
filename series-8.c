/*Enter  the  limit : 10
1 + 4 + 9 + 16 + 25 + 36 + 49 + 64 + 81 + 100 = 385*/
#include<stdio.h>
int main()
{

int n,sum=0;
printf("Enter  the  limit : ");
scanf("%d",&n);

for(int i = 1 ; i <=n; i++)
{
    if(i==n)
    {
        printf("%d",i*i);
    }
    else
    {
        printf("%d + ",i*i);
    }
    sum=sum+i*i;
}

printf(" = %d",sum);







    return 0;
}
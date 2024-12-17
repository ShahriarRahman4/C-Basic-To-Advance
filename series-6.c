/*Enter the limit :6
1 + 3 + 5 = 9*/
#include<stdio.h>
int main()
{
 int n;
 int sum=0;
 printf("Enter the limit :");
 scanf("%d",&n);

 if(n%2==0)
{
    n=n-1;
}
 for(int i=1;i<=n;i=i+2)
{   if(i==n)
   {
    printf("%d ",i);
   }
   else
   {
      printf("%d + ",i);
   }
    
    sum=sum+i;

}

printf("= %d",sum);



    return 0;
}
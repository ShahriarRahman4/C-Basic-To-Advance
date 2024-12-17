/*Enter the limit :6
1 + 2 + 3 + 4 + 5 + 6 = 21*/
#include<stdio.h>
int main()
{
 int n;
 int sum=0;
 printf("Enter the limit :");
 scanf("%d",&n);

 for(int i=1;i<=n;i++)
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
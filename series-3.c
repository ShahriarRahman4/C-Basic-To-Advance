
#include<stdio.h>
int main()
{
   int  n,i;
   int sum=0;
   printf("Enter the value of n :");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {
      printf("(");
      for(int j=1; j<=i; j++){
            if(i==j)printf("%d", j);
         else printf("%d+", j);
      }
      if(i==n)printf(")");
      else printf(")+");

   }

   return 0;


}

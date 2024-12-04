#include<stdio.h>
int main()
{
    int num;
    printf("Enter any  number :");
    scanf("%d",&num);
   int count=0;
    for(int i=2;i<num;i++)
    {
       if(num%i==0)
       {
           count++;
       }
    }
 
 if(count==0)
 {
     printf("prime");
 }
 else
 {
     printf("Not prime");
 }
    return 0;
}
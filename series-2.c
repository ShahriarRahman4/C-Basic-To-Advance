/*
Enter the value of n1 and n2 :4 5
1X2+2X3+3X4+.....+4X5 = 40
*/

#include<stdio.h>
int main()
{
    int n1,n2;
    int a=1,b=2,sum=0;
    
    printf("Enter the value of n1 and n2 :");
    scanf("%d %d",&n1,&n2);

    while(a<=n1 && b<=n2)
    {
        sum=sum+a*b;
        a=a+1;
        b=b+1;
    }

    printf("1X2+2X3+3X4+.....+%dX%d = %d",n1,n2,sum);

}
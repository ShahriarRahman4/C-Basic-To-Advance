/*
Enter the last number :100
1+2+3+.....+100 = 5050
*/

#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the last number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("1+2+3+.....+%d = %d",n,sum);

    return 0;
}


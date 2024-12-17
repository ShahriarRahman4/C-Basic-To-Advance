#include<stdio.h>

void calculatePerfect(int lower,int upper)
{
    int num;
    for(num=lower;num<=upper;num++)
    {
        int sum=0;
        for(int i=1;i<=num/2;i++)
        {
            if(num%i==0)
            {
                sum=sum+i;
            }
        }
        if(sum==num)
        {
            printf("%d ",sum);
        }
    }
}

int main()
{
    int lowerRange,upperRange;
    printf("Enter lower range :");
    scanf("%d",&lowerRange);
    printf("Enter upper range :");
    scanf("%d",&upperRange);

    calculatePerfect(lowerRange,upperRange);
}

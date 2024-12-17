#include<stdio.h>

void calculatePrime(int lower,int upper)
{
    int num;
    
    for(num=lower;num<=upper;num++)
    {
        int count=0;

        for(int i=2;i<num;i++)
        {   
            if(num%i==0)
            {
                count++;
                
            }
        }
       if(count==0 && num!=1)
       {
        printf("%d ",num);
       }
    

    }
}


int main()
{
    int lowerValue,upperValue;
    printf("Enter lower range :");
    scanf("%d",&lowerValue);
    printf("Enter upper range :");
    scanf("%d",&upperValue);

    calculatePrime(lowerValue,upperValue);
}
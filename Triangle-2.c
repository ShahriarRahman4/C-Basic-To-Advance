#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,area,s;
    printf("Enter three values :");
    scanf("%f %f %f",&a,&b,&c);

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area of the triangle = %.2f",area);

    return 0;
}
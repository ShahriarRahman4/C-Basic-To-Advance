#include<stdio.h>

void calculateArea(float x, float y)
{
    float a = 0.5*x*y;
    printf("Area = %.2f",a);
}

int main()
{
    float base,height;
    printf("Enter base : ");
    scanf("%f",&base);
    printf("Enter height : ");
    scanf("%f",&height);

    calculateArea(base,height);

}
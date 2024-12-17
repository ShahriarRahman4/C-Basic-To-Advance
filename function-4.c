#include<stdio.h>

void CalculateArea(float Base,float Height,float Length,float Width,float Side,float Radius)
{
    float area1,area2,area3,area4;
    area1=.5*Base*Height;
    area2=Length*Width;
    area3=Side*Side;
    area4=3.14*Radius*Radius;

    printf("Area of a triangle:%.2f\n",area1);
    printf("Area of a rectangle:%.2f\n",area2);
    printf("Area of a square:%.2f\n",area3);
    printf("Area of a circle:%.2f\n",area4);
}


int main()
{
    float base,height,length,width,side,radius;
    printf("Enter base and height of the triangle:\n");
    scanf("%f %f",&base,&height);

    printf("Enter length and width of a rectangle:\n");
    scanf("%f %f",&length,&width);

    printf("Enter side length of the squre:\n");
    scanf("%f",&side);

    printf("Enter radius of the circle :\n");
    scanf("%f",&radius);

    CalculateArea(base,height,length,width,side,radius);

    return 0;


}


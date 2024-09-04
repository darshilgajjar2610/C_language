#include<stdio.h>
int main()
{
    float b,h,area;
    printf("Enter Breadth Of Triangle: ");
    scanf("%f",&b);
    printf("Enter Length Of Triangle: ");
    scanf("%f",&h);

    area = 0.5*b*h;

    printf("Area Of Triangle: %.2f\n",area);
    return 0;
}
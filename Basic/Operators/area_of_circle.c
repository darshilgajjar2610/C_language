#include<stdio.h>
int main()
{
    const float pie=3.14;
    float area,r;
    printf("Enter Radious Of Circle: ");
    scanf("%f",&r);

    area = pie*r*r;

    printf("Area Of Circle Is: %f\n",area);
    return 0;
}
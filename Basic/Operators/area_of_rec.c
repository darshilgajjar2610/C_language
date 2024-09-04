#include<stdio.h>
int main()
{
    float l,area;
    printf("Enter Length Of Rectangle: ");
    scanf("%f",&l);

    area = l * l;

    printf("Area Of Rectangle Is: %.2f\n",area);
    return 0;
}
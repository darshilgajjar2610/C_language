#include<stdio.h>
int main()
{
    int total, angle1, angle2, angle3;

    printf("Enter 1st Angle of Triangle: ");
    scanf("%d",&angle1);

    printf("Enter 2nd Angle of Triangle: ");
    scanf("%d",&angle2);

    total = angle1 + angle2;
    angle3  = 180 - total;

    printf("Your right angle is: %d\n",angle3);
    return 0; 
}
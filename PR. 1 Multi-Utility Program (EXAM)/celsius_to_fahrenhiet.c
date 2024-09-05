#include<stdio.h>
int main()
{
    float cel,farh;
    printf("Enter Degree In CELSIOUS: ");
    scanf("%f",&cel);

    farh = 1.8 * cel + 32;

    printf("Your fahrenhiet Degree IS: %.1f\n",farh);
    return 0;
}
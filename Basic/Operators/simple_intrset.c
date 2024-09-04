#include<stdio.h>
int main()
{
    float si,p,r,n;
    printf("Enter Amount: ");
    scanf("%f",&p);
    printf("Enter rate: ");
    scanf("%f",&r);
    printf("Enter Number Of period: ");
    scanf("%f",&n);

    si = p*r*n/100;

    printf("Your Simple Intrest Is: %.2f\n",si);
    return 0;
}
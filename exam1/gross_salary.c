#include<stdio.h>
int main()
{
    float gross_salary,bs,hra,hra1,da,da1,ta,ta1;
    printf("Enter Base Salary: ");
    scanf("%f",&bs);

    printf("Enter HRA persentage: ");
    scanf("%f",&hra1);

    printf("Enter DA persentage: ");
    scanf("%f",&da1);

    printf("Enter TA persentage: ");
    scanf("%f",&ta1);

    hra = bs * hra1 / 100;
    da = bs * da1 / 100;
    ta = bs * ta1 / 100 ;
    gross_salary = bs + hra + da + ta;


    printf("Your Gross_Salary Is: %.2f\n",gross_salary);
    return 0;
}
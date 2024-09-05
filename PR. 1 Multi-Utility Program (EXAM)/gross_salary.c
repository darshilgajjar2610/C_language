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


    hra = hra1 * bs / bs;
    da = da1 *bs / bs;
    ta = ta1 *bs / bs;
    gross_salary = bs + hra + da + ta;


    printf("Your Gross_Salary Is: %.2f\n",gross_salary);
    return 0;
}
#include<stdio.h>
int main()
{
    float sub1,sub2,sub3,per,total;
    printf("Enter English Marks: ");
    scanf("%f",&sub1);

    printf("Enter Eco Marks: ");
    scanf("%f",&sub2);

    printf("Enter BA Marks: ");
    scanf("%f",&sub3);

    total = sub1 + sub2 +sub3;
    per = total / 300 * 100;

    printf("Your Average Persantage is :%.2f\n",per);
    return 0;
}
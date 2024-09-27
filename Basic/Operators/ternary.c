#include<stdio.h>
int main()
{
    int no1,no2;
    printf("Enter First NUmber: ");
    scanf("%d",&no1);
    printf("Enter second Number: ");
    scanf("%d",&no2);

    (no1 > no2)? printf("NO1 is Bigger\n") : printf("NO2 is bigger\n");
    return 0;
}
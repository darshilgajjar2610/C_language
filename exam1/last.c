#include<stdio.h>
int main()
{
    int last,no,sum;

    printf("Enter any no: ");
    scanf("%d",&no);

    last = no % 10;

while (no > 9)
{
    no = no / 10;
}
    sum = last+no;

printf("%d\n",sum);

    return 0;
}
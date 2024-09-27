#include<stdio.h>
int main()
{
    int first,last,sum,no;
    printf("Enter Any Number: ");
    scanf("%d",&no);

    last = no % 10;
    
    while (no > 9)
    {
        no = no / 10;
    }

    first = no;
    sum = last + first;
    printf("Sum of %d & %d is = %d\n",first,last,sum);
    return 0;
}
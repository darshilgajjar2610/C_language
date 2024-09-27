#include<stdio.h>
int main()
{
    int no;
    printf("Enter Number to check Positive Or Negative: ");
    scanf("%d",&no);

    if(no > 0)
    {
        printf("Number Is Positive\n");
    }

    else if(no == 0)
    {
        printf("Number Is Netural\n");
    }

    else
    {
        printf("Number Is Negative\n");
    }
    return 0;
}
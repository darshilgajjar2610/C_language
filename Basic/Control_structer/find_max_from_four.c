#include<stdio.h>
int main()
{
    int no1,no2,no3,no4;
    printf("Enter First NUmber: ");
    scanf("%d",&no1);
    printf("Enter second Number: ");
    scanf("%d",&no2);
    printf("Enter third Number: ");
    scanf("%d",&no3);
    printf("Enter fourth Number:");
    scanf("%d",&no4);


    if (no1 > no2 && no1 > no3 && no1 > no4)
    {
        printf("The Maximum number is %d\n",no1);
    }

    else if(no2 > no1 && no2 > no3 && no2 > no4)
    {
        printf("The Maximum number is %d\n",no2);
    }
    
    else if(no3 > no2 && no3 > no1 && no3 > no4)
    {
        printf("The Maximum number is %d\n",no3);
    }

    else if(no4 > no1 && no4 > no2 && no4 > no3)
    {
        printf("The Maximum number is %d\n",no4);
    }

    else
    {
        printf("WARNING: ALL number Are same\n");
    }
    return 0;
}
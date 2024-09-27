#include<stdio.h>
int main()
{
    int no1, no2;
    printf("Enter First NUmber");
    scanf("%d",&no1);
    printf("Enter second Number");
    scanf("%d",&no2);

    if (no1 < no2)
    {
        printf("Number %d is Smaller\n",no1);
    }

    else if(no2 < no1)
    {
        printf("Number %d is Smaller\n",no2);
    }
    
    else
    {
        printf("WARNING: Both number Are same\n");
    }
    return 0;
}
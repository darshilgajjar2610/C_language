#include<stdio.h>
int main()
{
    int no1,no2,no3;
    printf("Enter First NUmber: ");
    scanf("%d",&no1);
    printf("Enter second Number: ");
    scanf("%d",&no2);
    printf("Enter third Number: ");
    scanf("%d",&no3);

    (no1 < no2 && no1 < no3)? printf("The Minimum number is %d\n",no1): (no2 < no1 && no2 < no3)? printf("The Minimum number is %d\n",no2): (no3 < no2 && no3 < no1)? printf("The Minimum number is %d\n",no3): printf("ALL NUMBER ARE SAME:\n");
    return 0;
}
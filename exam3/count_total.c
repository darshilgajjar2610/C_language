#include<stdio.h>
int main()
{
    int count,no;
    printf("Enter Any Number: ");
    scanf("%d",&no);

    while(no != 0)
    {
        no=no/10;
        count++;
    }
    printf("There are %d numbers\n",count);
    return 0;
}
#include<stdio.h>
int main()
{
    int fact=1,len,i=1;
    printf("Enter length for factorial: ");
    scanf("%d",&len);

    while(i<=len)
    {
        fact = fact * i;
        i++;
    }
     printf("Factorial of %d IS:%d\n",len,fact);
    return 0;
}
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Length Of odd number: ");
    scanf("%d",&n);

    while(n > 1)
    {
        printf("%d\n",n);
        n-=2;
    }
    return 0;
}
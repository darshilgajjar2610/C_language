#include<stdio.h>
int main()
{
    int a[5];
    a[0] = 3;
    a[1] = 7;
    a[2] = 1;
    a[3] = 8;
    a[4] = 6;

    int length = sizeof(a) / sizeof(a[0]);
    printf("Length Of Array Is:- %d\n",length);
    return 0;
}
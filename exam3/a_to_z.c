#include<stdio.h>
int main()
{
    char ch = 'A';
    do
    {
        printf("%c ",ch);
        ch+=4;
    }
    while(ch <= 'Z');
    printf("\n");
    return 0;
}
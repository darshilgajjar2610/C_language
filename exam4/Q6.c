#include<stdio.h>
int main()
{
    int i,j,k=0;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=9; j++)
        {
            j<=5?k++:k--;
            if(j<=i || j>=10-i)
            {
                //printf("*");
                printf("%d",k);
            }
            
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
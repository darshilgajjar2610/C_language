#include<stdio.h>
int main()
{
    int i,j,k=0;
    for(i=1;i<=7;i++)
    {
        i<=8-i?k++:k--;
        k=i;
        for(j=1;j<=7;j++)
        {
            if(j <= 8-i)
            {
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
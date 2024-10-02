#include<stdio.h>
int main()
{
    int i,j,r;
    printf("Enter Row for your Triangle:- ");
    scanf("%d",&r);
    
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=r*2-1; j++)
        {
            if(j >= (r+1)-i && j <= (r-1)+i)
            {
                printf("*");
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
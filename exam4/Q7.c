#include<stdio.h>
int main()
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(i==1||i==3||j==1||j==5)
                if((i==4&&j==5)||(i==5&&j==5))
                {
                    printf(" ");
                }
                
                else
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
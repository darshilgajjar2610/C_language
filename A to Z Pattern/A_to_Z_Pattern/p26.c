
#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=5;j++)
        {
            
            if(j==1||j==5||i==7)
            {
               if(i==7&&(j==1||j==5))
               {
                   printf(" ");
               }
               else
               {
                   printf("*");
               }
            }
            else
            {
                printf(" ");
            }
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
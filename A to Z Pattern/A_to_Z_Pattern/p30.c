
#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++)
        {
            
            if((i==1)&&(j==1||j==7)||(i==2)&&(j==2||j==6)||(i==3)&&(j==3||j==5)||(i==4&&j==4)||j==4)
            {
                if(j==4&&(i==1||i==2||i==3))
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
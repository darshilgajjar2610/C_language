
#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=40;j++)
        {
            if(j==2||j==5||j==7||j==11||j==13||j==16||j==18||j==22||j==24||j==28||j==32||j==36||j==40||i==3||i==4||i==5||i==1||i==7)
            {
                printf("*");
                /*if()
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }*/
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
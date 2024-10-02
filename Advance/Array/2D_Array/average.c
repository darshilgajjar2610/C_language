#include<stdio.h>
int main()
{
    int n,i,j,raw,col,length,arr[50][50];
    float average,total;

    printf("Enter Length Of Raw:- ");
    scanf("%d",&raw);
    printf("Enter Length Of Column:- ");
    scanf("%d",&col);

    for(i=1;i<=raw;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("Enter Your Element arr[%d][%d]:- ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    //printf("******************************************************************\n");

    /*for(i=1;i<=raw;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("Your Element arr[%d]:- %d \n",i,arr[i][j]);
        }
    }*/

    for(i=1;i<=raw;i++)
    {
        for(j=1;j<=col;j++)
        {
            total = total+arr[i][j];
        }
    }
    
    n = raw*col;
    average = total / n;

    printf("\n******************************************************************\n");

    printf("Average Of Array Is:- %.2f\n",average);
    return 0;
}
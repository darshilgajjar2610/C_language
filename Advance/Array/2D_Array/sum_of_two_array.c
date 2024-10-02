#include<stdio.h>
int main()
{
    int i,j,raw,col,a[50][50],b[50][50],c[50][50];
    printf("Enter Length Of Raw:- ");
    scanf("%d",&raw);
    printf("Enter Length Of Column:- ");
    scanf("%d",&col);

    for(i=1;i<=raw;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("Enter Your Element A[%d][%d]:- ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
printf("\n******************************************************************\n");
    for(i=1;i<=raw;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("Enter Your Element B[%d][%d]:- ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
//printf("\n******************************************************************\n");
    for(i=1;i<=raw;i++)
    {
        for(j=1;j<=col;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
printf("\n******************************************************************\n");
printf("Sum Of A[][] && B[][]\n");
    for(i=1;i<=raw;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
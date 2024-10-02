#include<stdio.h>
int main()
{
    int i,j,raw,col,arr[50][50];
    printf("Enter The length Of Raw: ");
    scanf("%d",&raw);
    printf("Enter The Length Of Column: ");
    scanf("%d",&col);

    for(i=1;i<=raw;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("Enter Your Elements a[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\nBefore Transport\n\n");

    for(i=1;i<=raw;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }

     printf("\nAfter Transport\n\n");

    for(i=1;i<=raw;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("%d",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int i,j,raw,col,arr[50][50],larg;
    printf("Enter The length Of Raw: ");
    scanf("%d",&raw);
    printf("Enter The Length Of Column: ");
    scanf("%d",&col);

    printf("\n");

    for(i=1;i<=raw;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("Enter Your Elements a[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=1;i<=raw;i++)
    {
        for(j=1;j<=col;j++)
        {
            if(arr[i][j] > larg)
            {
                larg = arr[i][j];
            }
        }
    }
    
    printf("\n");
    printf("Largest Number Is: %d\n",larg);
    return 0;
}
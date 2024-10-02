#include<stdio.h>
int main()
{
    int i,j,raw,col,arr[50][50],raw_no,sum_raw;//,sum_col,col_no;
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

    printf("Enter Raw Number: ");
    scanf("%d",&raw_no);

    printf("\nElements Of Raw: ");
    for(i=1;i<=raw;i++)
    {
        for(j=1;j<=col;j++)
        {
           if(raw_no == arr[i][j])
           {
                sum_raw = sum_raw + arr[i][j];
                printf("%d ",arr[i][j]);
           }
        }
    }
    printf("\nThe sum of a row %d: %d\n",raw_no,sum_raw);
    return 0;
}
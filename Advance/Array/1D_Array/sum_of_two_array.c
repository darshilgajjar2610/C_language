#include<stdio.h>
int main()
{
    int a[50],b[50],c[50],n,i;
    printf("Enter Length For Array:- ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("Enter Element A[%d]:- ",i);
        scanf("%d",&a[i]);
    }

    printf("\n\n");

    for(i=1;i<=n;i++)
    {
        printf("Enter Element B[%d]:- ",i);
        scanf("%d",&b[i]);
    }

    for(i=1;i<=n;i++)
    {
        c[i] = a[i] + b[i];
    }

    printf("\n\n");

    for(i=1;i<=n;i++)
    {
        printf("Sum of A[%d] & B[%d] = %d \n",i,i,c[i]);
    }
    return 0;
}
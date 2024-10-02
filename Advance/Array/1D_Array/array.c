#include<stdio.h>
int main()
{
    int i,j,n,arr[100];
    printf("Enter The length of array:- ");
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        printf("Enter Your Element at arr[%d]:- ",i);
        scanf("%d",&arr[i]);
    }

    for(i=1; i<=n; i++)
    {
        printf("arr[%d]:- %d\n",i,arr[i]);
    }
    return 0;
}
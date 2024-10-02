#include<stdio.h>
int main()
{
    int i,n,arr[50];
    printf("Enter Length Of Array:- ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("Enter Element At arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n*******************************\n");
    printf("Your Negative Elements Are\n");
    printf("\n");
    for(i=0;i<=n;i++)
    {
        if(arr[i]<0)
        {
            printf("a[%d] = %d\n",i,arr[i]);
        }

        /*else
        {
            printf("");
        }*/
    }
    return 0;
}
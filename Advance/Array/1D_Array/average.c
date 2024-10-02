#include<stdio.h>
int main()
{
    int i,n,length,arr[100];
    float average,total;
    printf("Enter Length Of array:- ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("Enter Your Element arr[%d]:- ",i);
        scanf("%d",&arr[i]);
    }

    printf("******************************************************************\n");

    for(i=1;i<=n;i++)
    {
        printf("Your Element arr[%d]:- %d \n",i,arr[i]);
    }

    for(i=1;i<=n;i++)
    {
        total = total+arr[i];
    }
    
    //printf("Average Of Array Is:- %d\n",total);
    //
    //printf("Average Of Array Is:- %d\n",length);
    
    average = total / n;

    printf("******************************************************************\n");

    printf("Average Of Array Is:- %.1f\n",average);
    return 0;
}
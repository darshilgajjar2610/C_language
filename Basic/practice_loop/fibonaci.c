#include<stdio.h>
int main()
{
    int ans=0,no1=0,no2=1,n;
    printf("Enter length for fibonaci: ");
    scanf("%d",&n);
    
    while(ans<=n)
    {
        ans = no1 + no2;
        no1 = no2;
        no2 = ans;
        printf("%d ",ans);
    }
    printf("\n");
    return 0;
}
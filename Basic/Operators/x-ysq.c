#include<stdio.h>
int main()
{
    int ans,x,y;
    printf("Enter value of X: ");
    scanf("%d",&x);
    printf("Enter value of Y: ");
    scanf("%d",&y);

    ans = (x*x) - 2*(x)*(y) + (y*y);

    printf("Answer is: %d\n",ans);
    return 0;
}
#include<stdio.h>
int main()
{
    int ans,x,y;
    printf("Enter Value Of x: ");
    scanf("%d",&x);
    printf("Enter Value of Y: ");
    scanf("%d",&y);

    ans = (x*x) + 2*(x)*(y) + (y*y);
    printf("Answer is: %d\n",ans);
    return 0;
}
#include<stdio.h>
int main()
{
    int ans,x,y;
    printf("Enter Value Of x: ");
    scanf("%d",&x);
    printf("Enter Value of Y: ");
    scanf("%d",&y);

    ans = (x*x*x) + (3*x*x*y) + (3*x*y*y) + (y*y*y);

    printf("Answer is: %d\n",ans);
    return 0;
}
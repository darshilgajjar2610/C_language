#include<stdio.h>
int main()
{
    int i,n;
    char name[100] = {};
    printf("Enter Length Of STRING:- ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        printf("Char:-%d = ",i);
        scanf("%s",&name[i]);
    }
    
    for(i=1;i<=n;i++)
    {
        printf("%c",name[i]);
    }
    return 0;
}
#include<stdio.h>
int cube(int a,int ans)
{
	printf("Enter Number:- ");
	scanf("%d",&a);
	
	ans = a*a*a;
	
	printf("Cube Of %d Is:- %d",a,ans);
}

int main(int a, int ans)
{
	cube(a,ans);
}
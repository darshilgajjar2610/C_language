#include<stdio.h>
#include<string.h>

int cube()
{
	int a;
	printf("Enter Number:- ");
	scanf("%d",&a);
	return a*a*a;
}
	
int main()
{
	
	int ans;
	ans = cube();     
	printf("Cube is:- %d",ans);
	
	return 0;
}
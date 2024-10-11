#include<stdio.h>
int arr(int a[100])
{
	int n,i;
	
	for(i=1;i<=n;i++)
	{
		printf(" Element At %d:- %d",i,a[i]);
	}
	
	return a[100];
}

int main(int a[100])
{
	int n,i;
	printf("Enter Length Of array:- ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("Enter Element At %d:- ");
		scanf("%d",a[i]);	
	}
	
	arr(a[100]);
}
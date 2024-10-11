#include<stdio.h>

int arr_sum()
{
	int i,n,sum;
	int arr[100];
	
	printf("Enter Length Of Array:- ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("Enter Element no %d:- ",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=1;i<=n;i++)
	{
		sum += arr[i];
	}
	
	printf("Sum Of Array is:- %d",sum);
	
	return sum;
}

int main()
{
	arr_sum();
}
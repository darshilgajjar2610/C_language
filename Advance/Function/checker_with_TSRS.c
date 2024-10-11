#include<stdio.h>
 
 int checker(int no)
 {
	printf("Enter Number:- ");
	scanf("%d",&no);
	
	if(no % 3 == 0 && no % 5 == 0)
	{
		printf("Number %d Is Divisible By 3 & 5 Both\n",no);
	}
	
	else if(no % 3 == 0 && no % 5 != 0)
	{
		printf("Number %d Is Divisible By 3 But Not With 5\n",no);
	}
	
	else if(no % 3 != 0 && no % 5 == 0)
	{
		printf("Number %d Is Divisible By 5 But Not With 3\n",no);
	}
	
	else
	{
		printf("Number %d Is Not Divisible By Any",no);
	}
	
	return no;
 }
 
 int main(no)
 {
 	checker(no);
 }
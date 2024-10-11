#include<stdio.h>
#include<string.h>
int counter(int count)
{
	char str[100];
	
	printf("Enter String:- ");
	gets(str);
	
	while(str[count] != '\0')
	{
		count++;
	}
	
	printf("\n -- Your String Has %d Character -- ",count);
}

int main(int count)
{
	counter(count);
}
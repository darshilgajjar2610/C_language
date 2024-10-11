#include<stdio.h>
#include<string.h>
int main()
{
	
	char s[30];
	int i,j;
	
	printf("Enter String :");
	gets(s);
	
	int l = strlen(s);
	
	for(i=0; i<l; i++)
	{
		int f=1;
		for(j=i+1; j<l; j++)
		{
			if(s[i] == s[j])
			{
				f++;
				s[j] = '\0';
			}
		}
		if(s[i] != '\0')
		{
			printf("%c : %d \n",s[i],f);
		}
	}
return 0;
}
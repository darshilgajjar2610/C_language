#include<stdio.h>
#include<string.h>
int main() 
{
    char str[100];
    int i, flag = 0;
    printf("Enter String:- ");
    gets(str);

    for (i = 0; i < strlen(str); i++) 
    {
        if (str[i] != str[strlen(str) - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("%s is not palindrome", str);
    else
        printf("%s is palindrome", str);
        
    return 0;
}
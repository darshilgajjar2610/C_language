#include <stdio.h>

void Array(int arr[], int n) 
{
	int i;
    printf("\n||-- Array elements are --||\n\n");
    
    for (i = 1; i <= n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(int n) 
{
    int i;

    printf("||-- Enter the size of the array --||\n");
    scanf("%d", &n);

    int arr[n];

    for (i = 1; i <= n; i++) 
	{
		printf("Enter %d elements: ", i);
        scanf("%d", &arr[i]);
    }

    Array(arr, n);

    return 0;
}

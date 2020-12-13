#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Variables declaration
	int n, sum = 0;

	// Assigns the input to the corresponding variable
	scanf("%d", &n);

	// Allocates the necessary memory bytes for the array (n * 4 bytes)
	int *arr = (int *)malloc(n * sizeof(int));

	// Loop from 0 to n - 1
	for (int i = 0; i < n; i++)
	{
		// Fills the array
		scanf("%d", &arr[i]);

		// Adds the content of the array to sum
		sum += arr[i];
	}

	// Prints sum content
	printf("%d\n", sum);

	// Frees the memory used by arr
	free(arr);

	// Returns successful exit status
	return (0);
}

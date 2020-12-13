#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Variables declaration
	int num, *arr;

	// Assigns the input to num
	scanf("%d", &num);

	// Allocates the necessary memory bytes for the array (num * 4 bytes)
	arr = (int *)malloc(num * sizeof(int));

	// Fills the array
	for (int i = 0; i < num; i++)
		scanf("%d", arr + i);

	// Reverses the array
	for (int i = 0, j = num - 1; i < j; i++, j--)
	{
		// Holds the temporary value
		int temp = arr[i];

		// Switchs the values in the array
		arr[i] = arr[j];
		arr[j] = temp;
	}

	// Prints the array
	for (int i = 0; i < num; i++)
		printf((i != num - 1) ? "%d " : "%d\n", *(arr + i));

	// Returns successful exit status
	return (0);
}

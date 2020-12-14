#include <stdio.h>

int main(void)
{
	// Variables declaration
	int n, length, num;

	// Assigns the input to n
	scanf("%d", &n);

	// Sets length of the array
	length = (n * 2) - 1;
	int arr[length][length];

	// Loop from 0 to length - 1 y both dimensions of the array
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			// Sets value of num to the less value between i and j
			num = (i < j) ? i : j;

			/* If num is less than length - i nothing happend,
			   otherwise num is equal to length - i - 1 */
			num = (num < length - i) ? num : length - i - 1;

			/* If num is less than length - j nothing happend,
			   otherwise num is equal to length - j - 1 */
			num = (num < length - j) ? num : length - j - 1;

			// Prints n - num
			printf((j == length - 1) ? "%d\n" : "%d ", n - num);
		}
	}

	// Returns successful exit status
	return (0);
}

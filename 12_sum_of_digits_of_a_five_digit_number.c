#include <stdio.h>

int main(void)
{
	// Variables declaration
	int n, ans = 0;

	// Assigns the input to the corresponding variable
	scanf("%d", &n);

	// Loop while n is greater than 0
	while (n > 0)
	{
		// Adds the last digit of n to ans
		ans += n % 10;

		// Removes the last digit of n
		n /= 10;
	}

	// Prints ans content
	printf("%d\n", ans);

	// Returns successful exit status
	return (0);
}

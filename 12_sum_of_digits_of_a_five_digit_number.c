#include <stdio.h>

int main(void)
{
	// Variables declaration
	int n, ans = 0;

	// Assign the input to the corresponding variable
	scanf("%d", &n);

	// Loop while n is greater than 0
	while (n > 0)
	{
		// Add the last digit of n to ans
		ans += n % 10;

		// Remove the last digit of n
		n /= 10;
	}

	// Console output ans content
	printf("%d\n", ans);

	// Successful exit status
	return (0);
}

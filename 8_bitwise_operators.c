#include <stdio.h>

void calculate_the_maximum(int n, int k)
{
	// Variables declaration
	int and = 0, or = 0, xor = 0;

	// Loop from i to n - 1
	for (int i = 1; i < n; i++)
	{
		// Loop from j to n
		for (int j = i + 1; j <= n; j++)
		{
			// Biggest `and` operator less than k
			if ((i & j) > and && (i & j) < k)
				and = i & j;

			// Biggest `or` operator less than k
			if ((i | j) > or && (i | j) < k)
				or = i | j;

			// Biggest `xor` operator less than k
			if ((i ^ j) > xor && (i ^ j) < k)
				xor = i ^ j;
		}
	}

	// Console output and, or, xor
	printf("%d\n%d\n%d\n", and, or, xor);
}

int main(void)
{
	// Variables declaration
	int n, k;

	// Assign the input to the corresponding variables
	scanf("%d %d", &n, &k);

	// Call function to operate with the values
	calculate_the_maximum(n, k);

	// Successful exit status
	return (0);
}

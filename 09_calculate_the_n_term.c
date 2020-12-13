#include <stdio.h>

int find_nth_term(int n, int a, int b, int c)
{
	// Variable declaration
	int nth;

	// If n is already calculated
	if (n == 1) { return a; }
	if (n == 2) { return b; }
	if (n == 3) { return c; }

	// Loop calculating S(i) = S(3) + S(2) + S(1) from i = 4 (S(4)) to n
	for (int i = 4; i <= n; i++)
	{
		// S(i) = S(3) + S(2) + S(1)
		nth = c + b + a;

		// S(1) = S(2)
		a = b;

		// S(2) = S(3)
		b = c;

		// S(3) = S(i)
		c = nth;
	}

	// Returns S(n)
	return (nth);
}

int main(void)
{
	// Variables declaration
	int n, a, b, c;

	// Assigns the input to the corresponding variables
	scanf("%d %d %d %d", &n, &a, &b, &c);

	// Assigns the return of the called function
	int ans = find_nth_term(n, a, b, c);

	// Prints ans content
	printf("%d\n", ans);

	// Returns successful exit status
	return (0);
}

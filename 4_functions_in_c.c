#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
	// Returns the biggest number (using ternary operator)
	return ((a > b && a > c && a > d) ? a : (b > c && b > d) ? b : (c > d) ? c : d);
}

int main(void)
{
	// Variables declaration
	int a, b, c, d;

	// Assigns the input to the corresponding variables
	scanf("%d %d %d %d", &a, &b, &c, &d);

	// Assigns the return of the called function
	int ans = max_of_four(a, b, c, d);

	// Prints ans content
	printf("%d\n", ans);

	// Returns successful exit status
	return (0);
}

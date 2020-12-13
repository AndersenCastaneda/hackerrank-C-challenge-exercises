#include <stdio.h>

void update(int *a, int *b)
{
	// Holds the temporary value
	int c = *a;

	// Assigns a + b
	*a = *a + *b;

	/* Depending of a > b or b > a
	   Assigns a - b or b - a (using ternary operator) */
	*b = (c > *b) ? c - *b : *b - c;
}

int main(void)
{
	// Variables declaration
	int a, b;
	int *pa = &a, *pb = &b;

	// Assigns the input to the corresponding variables
	scanf("%d %d", &a, &b);

	// Calls function to operate with the values
	update(pa, pb);

	// Prints a and b content
	printf("%d\n%d\n", a, b);

	// Returns successful exit status
	return (0);
}

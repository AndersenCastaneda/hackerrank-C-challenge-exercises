#include <stdio.h>

void update(int *a, int *b)
{
	// Hold temporary value
	int c = *a;

	// Assign a + b
	*a = *a + *b;

	/* Depending of a > b or b > a
	   Assign a - b or b - a (using ternary operator) */
	*b = (c > *b) ? c - *b : *b - c;
}

int main(void)
{
	// Variables declaration
	int a, b;
	int *pa = &a, *pb = &b;

	// Assign the input to the corresponding variables
	scanf("%d %d", &a, &b);

	// Call function to operate with the values
	update(pa, pb);

	// Console output a and b content
	printf("%d\n%d\n", a, b);

	// Successful exit status
	return (0);
}

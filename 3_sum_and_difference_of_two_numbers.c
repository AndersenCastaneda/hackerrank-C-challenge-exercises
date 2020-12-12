#include <stdio.h>

int main(void)
{
	// Variables declaration
	int a, b;
	float c, d;

	// Assign the input to the corresponding variables
	scanf("%d %d", &a, &b);
	scanf("%f %f", &c, &d);

	// Console output sum and difference
	printf("%d %d\n", a + b, a - b);
	printf("%.1f %.1f\n", c + d, c - d);

	// Successful exit status
	return (0);
}

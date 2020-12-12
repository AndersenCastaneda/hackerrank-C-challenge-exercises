#include <stdio.h>

int main(void)
{
	// Variables declaration
	int a, b;
	char *str[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

	// Assign the input to the corresponding variables
	scanf("%d\n%d", &a, &b);

	// Loop from a to b
	for (; a <= b; a++)
	{
		// Simple conditions
		if (a >= 1 && a <= 9)
			printf("%s\n", str[a]);
		else if (a > 9 && a % 2 == 0)
			printf("even\n");
		else if (a > 9)
			printf("odd\n");
	}

	// Successful exit status
	return (0);
}

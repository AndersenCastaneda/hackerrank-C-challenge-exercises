#include <stdio.h>

int main(void)
{
	// Variable declaration
	char s[100];

	// Assigns the input to s
	scanf("%[^\n]%*c", s);

	// Prints Hello, World! and s content
	printf("Hello, World!\n%s\n", s);

	// Returns successful exit status
	return (0);
}

#include <stdio.h>

int main(void)
{
	// Variable declaration
	char s[100];

	// Assign the input to s
	scanf("%[^\n]%*c", s);

	// Console output Hello, World! and s content
	printf("Hello, World!\n%s\n", s);

	// Successful exit status
	return (0);
}

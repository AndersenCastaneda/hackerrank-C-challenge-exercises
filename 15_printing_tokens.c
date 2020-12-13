#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	// Variable declaration
	char *s;

	// Allocates 1024 bytes of memory
	s = malloc(1024 * sizeof(char));

	// Assigns the input to s
	scanf("%[^\n]", s);

	// Reallocates the space of memory necessary
	s = realloc(s, strlen(s) + 1);

	// Loop while s[i] is different than null
	for (int i = 0; s[i]; i++)
	{
		// Prints the character of the string or if found a space print a new line
		if (s[i] == ' ')
			printf("\n");
		else
			printf("%c", s[i]);
	}

	// Print end line
	printf("\n");

	// Returns successful exit status
	return (0);
}

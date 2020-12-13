#include <stdio.h>

int main(void)
{
	// Variables declaration
	char c, ch[9], str[15];

	// Assigns the input to the corresponding variables
	scanf("%c%s %[^\n]%*c", &c, ch, str);

	// Prints c, ch and str content
	printf("%c\n%s\n%s\n", c, ch, str);

	// Returns successful exit status
	return (0);
}

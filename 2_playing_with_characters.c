#include <stdio.h>

int main(void)
{
	// Variables declaration
	char c, ch[9], str[15];

	// Assign the input to the corresponding variables
	scanf("%c%s %[^\n]%*c", &c, ch, str);

	// Console output c, ch and str content
	printf("%c\n%s\n%s\n", c, ch, str);

	// Successful exit status
	return (0);
}

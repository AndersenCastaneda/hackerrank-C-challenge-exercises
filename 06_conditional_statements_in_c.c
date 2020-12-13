#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototype definition
char *readline();

int main(void)
{
	// Variable declaration
	char *n_endptr;

	// Assigns the input line
	char *n_str = readline();

	// Converts the input line (char *) to int (base 10) and assign it to n
	int n = strtol(n_str, &n_endptr, 10);

	/* If the input line can't be converted to an int
	   then exit the program with failure exit status */
	if (n_endptr == n_str || *n_endptr != '\0')
		exit(EXIT_FAILURE);

	// Simple conditions
	if (n == 1)
		printf("one\n");
	else if (n == 2)
		printf("two\n");
	else if (n == 3)
		printf("three\n");
	else if (n == 4)
		printf("four\n");
	else if (n == 5)
		printf("five\n");
	else if (n == 6)
		printf("six\n");
	else if (n == 7)
		printf("seven\n");
	else if (n == 8)
		printf("eight\n");
	else if (n == 9)
		printf("nine\n");
	else if (n > 9)
		printf("Greater than 9\n");

	// Returns successful exit status
	return (EXIT_SUCCESS);
}

char *readline()
{
	// Variables declaration
	size_t alloc_length = 1024;
	size_t data_length = 0;

	// Allocates 1024 bytes of memory
	char *data = malloc(alloc_length);

	// Infinite Loop
	while (true)
	{
		// Sets cursor to point to the first memory byte to data is point to
		char *cursor = data + data_length;

		/* Reads a line from the specified stream and stores it into the string pointed to by cursor.
		   It stops when either (n-1) characters are read, the newline character is read,
		   or the end-of-file is reached, whichever comes first. */
		char *line = fgets(cursor, alloc_length - data_length, stdin);

		// If there's no line then breaks the loop
		if (!line)
			break;

		// Adds cursor length to data_length
		data_length += strlen(cursor);

		/* If the length of cursor is less than alloc_length or if found a new line (\n)
		   means that is the end of the line then breaks the loop. */
		if (data_length < alloc_length - 1 || data[data_length - 1] == '\n')
			break;

		// Duplicates alloc_length
		size_t new_length = alloc_length << 1;

		// Allocates the new length (twice as before)
		data = realloc(data, new_length);

		// If realloc can't allocate the new size of memory then breaks the loop
		if (!data)
			break;

		/* Sets alloc_length equal to new_length (this way we can increment
		   the necessary bytes of memory for read the input line) */
		alloc_length = new_length;
	}

	// Sets the last index of the input line to null
	if (data[data_length - 1] == '\n')
		data[data_length - 1] = '\0';

	// Allocates the new length
	data = realloc(data, data_length);

	// return the input line
	return (data);
}

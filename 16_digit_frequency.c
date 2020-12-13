#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototype definition
char *readline();

int main(void)
{
	// Variables declaration
	int numbers[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	// Assigns the input line
	char *n_str = readline();

	// Loop while n_str[i] is defferent than null
	for (int i = 0; n_str[i]; i++)
	{
		/* Compares if s[i] is the ASCII representation
		   of the numbers (from 0 (48 in ASCII) to 9 (57 in ASCII)) */
		if (n_str[i] == 48) numbers[0] += 1;
		else if (n_str[i] == 49) numbers[1] += 1;
		else if (n_str[i] == 50) numbers[2] += 1;
		else if (n_str[i] == 51) numbers[3] += 1;
		else if (n_str[i] == 52) numbers[4] += 1;
		else if (n_str[i] == 53) numbers[5] += 1;
		else if (n_str[i] == 54) numbers[6] += 1;
		else if (n_str[i] == 55) numbers[7] += 1;
		else if (n_str[i] == 56) numbers[8] += 1;
		else if (n_str[i] == 57) numbers[9] += 1;
	}

	for (int i = 0; i < 10; i++)
		printf((i == 9) ? "%d\n" : "%d ", numbers[i]);

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

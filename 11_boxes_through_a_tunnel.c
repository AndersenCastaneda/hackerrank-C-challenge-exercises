#include <stdio.h>
#define MAX_HEIGHT 41

// Struct prototype
typedef struct Box
{
	int length;
	int width;
	int height;
} box;

int get_volume(box b)
{
	// Returns the volume of the box
	return (b.length * b.width * b.height);
}

int is_lower_than_max_height(box b)
{
	// Returns 1 if the box's height is lower than MAX_HEIGHT, otherwise 0
	return ((b.height < MAX_HEIGHT) ? 1 : 0);
}

int main(void)
{
	// Variable declaration
	int n;

	// Assigns the input to the corresponding variable
	scanf("%d", &n);

	// Allocates the necessary memory bytes for boxes (n * 12 bytes)
	box *boxes = malloc(n * sizeof(box));

	// Fills the array of boxes with the respective values
	for (int i = 0; i < n; i++)
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);

	// Loop through boxes and prints the volume
	for (int i = 0; i < n; i++)
	{
		// If can print the volume then print the volume
		if (is_lower_than_max_height(boxes[i]))
			printf("%d\n", get_volume(boxes[i]));
	}

	// Returns successful exit status
	return (0);
}

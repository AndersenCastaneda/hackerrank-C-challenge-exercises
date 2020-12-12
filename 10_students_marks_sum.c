#include <stdio.h>

int marks_summation(int *marks, int number_of_students, char gender)
{
	// Varable Declaration
	int sum = 0;

	// If gender is boys start from 0, otherwise 1
	int i = (gender == 'b') ? 0 : 1;

	/* Loop from first index for the specific gender to number_of_students - 1
	   incremented by 2 each iteration and adding the result */
	for (; i < number_of_students; i += 2)
		sum += marks[i];

	// Return the sum of the marks for the specific gender
	return (sum);
}

int main(void)
{
	// Variables declaration
	int number_of_students, sum;
	char gender;

	// Assign the input to the corresponding variable
	scanf("%d", &number_of_students);

	// Allocate the necessary memory bytes for marks (number_of_students * 4 bytes)
	int *marks = (int *)malloc(number_of_students * sizeof(int));

	// Fill the array with the values
	for (int student = 0; student < number_of_students; student++)
		scanf("%d", (marks + student));

	// Assign the input to the corresponding variable
	scanf(" %c", &gender);

	// Assign the return of the called function
	sum = marks_summation(marks, number_of_students, gender);

	// Console output sum content
	printf("%d\n", sum);

	// Free the memory used by marks
	free(marks);

	// Successful exit status
	return (0);
}

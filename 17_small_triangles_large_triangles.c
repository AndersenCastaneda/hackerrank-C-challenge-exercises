#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Struct prototype
typedef struct Triangle
{
	int a;
	int b;
	int c;
} triangle;

// Prototypes definition
double get_area(triangle *tr);
void swap(triangle *tr1, triangle *tr2);
void sort_by_area(triangle *tr, int n);

int main(void)
{
	// Variable declaration
	int n;

	// Assings the input to the respective variable
	scanf("%d", &n);

	// Allocates the necessary memory bytes for the triangle array (n * 12 bytes)
	triangle *tr = malloc(n * sizeof(triangle));

	// Reads the input and fills the array of triangles
	for (int i = 0; i < n; i++)
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);

	// Calls function to sort the triangles
	sort_by_area(tr, n);

	// Prints all triangles
	for (int i = 0; i < n; i++)
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);

	// Returns successful exit status
	return (0);
}

double get_area(triangle *tr)
{
	// Gets semi-perimeter of the triangle
	double s = (tr->a + tr->b + tr->c) / 2.0;

	// Returns the square root of the tringle using Heron's formula
	return (sqrt((s * (s - tr->a) * (s - tr->b) * (s - tr->c))));
}

void swap(triangle *tr1, triangle *tr2)
{
	// Holds temporary values from tr1
	int a = tr1->a, b = tr1->b, c = tr1->c;

	// Switchs the values in the triangles
	tr1->a = tr2->a;
	tr1->b = tr2->b;
	tr1->c = tr2->c;
	tr2->a = a;
	tr2->b = b;
	tr2->c = c;
}

void sort_by_area(triangle *tr, int n)
{
	/* Loop trough the array of triangles, an sort the array using bubble sort style.
	   If the array is big, then implement merge sort, or quick sort */
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			// If the value on left is bigger than the value on the right then swap values
			if (get_area(&tr[j]) > get_area(&tr[j + 1]))
				swap(&tr[j], &tr[j + 1]);
		}
	}
}

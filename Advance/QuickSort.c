#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 13

int checker(const void *a, const void *b);

int main()
{
	int array[SIZE];
	int x;

/* populate the array */
	srand((unsigned)time(NULL));
	for(x=0;x<SIZE;x++)
		array[x] = rand() % 100 + 1;

/* Display the unsorted array */
	puts("Unsorted array:");
	for(x=0;x<SIZE;x++)
		printf(" %3d",array[x]);
	putchar('\n');

/* Sort the array */
	qsort(array,SIZE,sizeof(int),checker);

/* Display the sorted array */
	puts("Sorted array:");
	for(x=0;x<SIZE;x++)
		printf(" %3d",array[x]);
	putchar('\n');

	return(0);
}

int checker(const void *a, const void *b)
{
	return( *(int *)a - *(int *)b );
}

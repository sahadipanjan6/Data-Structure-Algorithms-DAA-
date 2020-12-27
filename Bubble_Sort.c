#include<stdio.h>
#define MAX 10

// function prototypes
void display(int array[MAX], int length);
void bubble_sort(int array[MAX], int length);

void main()
{
	int i = 0;
	int size = 0;
	
	printf("\nEnter number of elements: \n");
	scanf("%d", &size);
	int input_array[size];

	printf("\nEnter the array elements...\n");
	for(i=0; i<size; i++)
		scanf("%d", &input_array[i]);

	// displaying the original array
	printf("\nOriginal Array is as follows:- \n");
	display(input_array, size);

	// Bubble Sorting and displaying the array
	printf("\nArray after Sorting is as follows:- \n");
	bubble_sort(input_array, size);

	// displaying the sorted array
	printf("\nAfter Bubble Sorting:- \n");
	display(input_array, size);
	printf("\n");
}

// function definition to display an array
void display(int array[MAX], int length)
{
	int i = 0;
	for(i=0; i<length; i++)
		printf("%d\t", array[i]);

	printf("\n");
}

// function definition to Bubble Sort the array
void bubble_sort(int array[MAX], int length)
{
	int i, j, temp = 0;
	int size = length;

	for(i=0; i<size; i++)
	{
		for(j=0; j<(size-i-1); j++)
		{
			if(array[j] > array[j+1])
			{
				// swapping the elements
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}
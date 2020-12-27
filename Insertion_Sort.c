#include<stdio.h>
#define MAX 10

// function prototypes
void display(int array[MAX], int length);
void insertion_sort(int array[MAX], int length);

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

	// Insertion Sorting and displaying the array
	insertion_sort(input_array, size);

	// displaying the sorted array
	printf("\nAfter Insertion Sorting:- \n");
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

// function definition to perform Insertion Sort of the array
void insertion_sort(int array[MAX], int length)
{
	int i, j, temp = 0;
	int size = length;

	for(i=1; i<size; i++)
	{
		j = i;
		while((array[j] < array[j-1]) && j>0)
		{
			// swapping the elements
			temp = array[j];
			array[j] = array[j-1];
			array[j-1] = temp;
			j--;
		}
	}
}
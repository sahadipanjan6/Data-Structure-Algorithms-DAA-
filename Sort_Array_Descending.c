#include<stdio.h>
#define MAX 10

// function prototypes
void display(int array[MAX], int length);
void sorting(int array[MAX], int length);


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

	// sorting and displaying the array
	printf("\nArray after Sorting is as follows:- \n");
	sorting(input_array, size);
}

// function definition to display an array
void display(int array[MAX], int length)
{
	int i = 0;
	for(i=0; i<length; i++)
		printf("%d\t", array[i]);

	printf("\n");
}

// function definition to sort an array in ascending order
void sorting(int array[MAX], int length)
{
	int i, j, temp = 0;
	int size = length;
	
	for(i=0; i<length; i++)
	{
		for(j=i+1; j<length; j++)
		{
			// checking and swapping the elements of the array
			if(array[i] < array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	// displaying the sorted array
	display(array, size);
}
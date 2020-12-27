#include<stdio.h>
#define MAX 10

// function prototypes
void display(int array[MAX], int length);
void odd_even_sort(int array[MAX], int length);

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

	// Odd-Even Sorting and displaying the array
	odd_even_sort(input_array, size);

	// displaying the sorted array
	printf("\nAfter Odd-Even Sorting:- \n");
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

// function definition to perform Odd-Even Sort
void odd_even_sort(int array[MAX], int length)
{
	int i, j, temp, flag = 0;
	int size = length;

	do
	{
		flag = 0;

		// performing EVEN SORT
		for(i=0; i<size-1; i=i+2)
		{
			// swapping the elements
			if(array[i] > array[i+1])
			{
				temp = array[i+1];
				array[i+1] = array[i];
				array[i] = temp;
				flag = 1;
			}
		}

		// performing ODD SORT
		for(j=1; j<size-1; j=j+2)
		{
			// swapping the elements
			if(array[j] > array[j+1])
			{
				temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;
				flag = 1;
			}
		}
	}while(flag);
}
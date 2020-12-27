#include<stdio.h>
#define MAX 10

// function prototypes
void display(int array[MAX], int length);
void bubble_sort(int array[MAX], int length);
int binary_search(int array[MAX], int low, int high, int key);

void main()
{
	int i, size, key = 0;
		
	printf("\nEnter number of elements: \n");
	scanf("%d", &size);
	int input_array[size];

	printf("\nEnter the array elements...\n");
	for(i=0; i<size; i++)
		scanf("%d", &input_array[i]);

	// displaying the original array
	printf("\nOriginal Array is as follows:- \n");
	display(input_array, size);

	// getting the element to be searched
	printf("\nEnter the key to be searched: \n");
	scanf("%d", &key);

	// searching for the key
	printf("\n%d is found in Index %d after sorting the array\n", key, binary_search(input_array, 0, size, key));
}

// function definition to display an array
void display(int array[MAX], int length)
{
	int i = 0;
	for(i=0; i<length; i++)
		printf("%d\t", array[i]);

	printf("\n");
}

// function definition to perform Bubble Sort of an array
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

// function definition to perform Binary Search of an array
int binary_search(int array[MAX], int low, int high, int key)
{
	int i = 0;
	int index = -1;
	int size = high;

	// sorting the array
	bubble_sort(array, size);

	// performing binar search
	while(low < high)
	{
		// finding the middle index of the array
		int mid = (low + high) / 2;

		// if searched element is present in the mid
		if(key == array[mid])
		{
			index = mid;
			break;
		}

		// if searched element is lower than the middle element
		else if(key < array[mid])
			high = mid - 1;

		// if searched element is higher than the middle element
		else if(key > array[mid])
			low = mid + 1;
	}

	return index;
}
#include<stdio.h>
#define MAX 10

// function prototypes
void display(int array[MAX], int length);
int linear_search(int array[MAX], int length, int key);

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
	printf("\n%d is found in Index %d\n", key, linear_search(input_array, size, key));
}

// function definition to display an array
void display(int array[MAX], int length)
{
	int i = 0;
	for(i=0; i<length; i++)
		printf("%d\t", array[i]);

	printf("\n");
}

// function definition to perform Linear Search of an array
int linear_search(int array[MAX], int length, int key)
{
	int i, index = -1;
	int size = length;

	for(i=0; i<size; i++)
	{
		// comparing the key with the current element
		if(array[i] == key)
		{
			index = i;
			break;
		}
		else
			continue;
	}

	return index;
}
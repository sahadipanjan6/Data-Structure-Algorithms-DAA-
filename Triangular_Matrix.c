#include<stdio.h>

const int R = 5;
const int C = 5;

// function prototypes
void display_upper_triangular(int matrix[R][C]);
void display_lower_triangular(int matrix[R][C]);
void display(int matrix[R][C]);

void main()
{
	int i, j = 0;
	int input_matrix[R][C];

	printf("\nEnter the matrix elements...\n");
	for(i=0; i<R; i++)
	{
		for(j=0; j<C; j++)
		{
			scanf("%d", &input_matrix[i][j]);
		}
	}

	// displaying the original matrix
	printf("\nOriginal Matrix is as follows:- \n");
	display(input_matrix);

	// displaying the Upper-Triangular matrix
	printf("\nUpper Triangular Matrix is as follows:- \n");
	display_upper_triangular(input_matrix);

	// displaying the Lower-Triangular matrix
	printf("\nLower Triangular Matrix is as follows:- \n");
	display_lower_triangular(input_matrix);
}

// function definition to display Upper Triangular Matrix
void display_upper_triangular(int matrix[R][C])
{
	int i, j = 0;

	for(i=0; i<R; i++)
	{
		for(j=0; j<C; j++)
		{
			// checking the condition for Upper-Triangular Matrix
			if(i < j)
			{
				printf("%d\t", matrix[i][j]);
			}
			else
				continue;
		}
		printf("\n");
	}
}

// function definition to display Lower Triangular Matrix
void display_lower_triangular(int matrix[R][C])
{
	int i, j = 0;

	for(i=0; i<R; i++)
	{
		for(j=0; j<C; j++)
		{
			// checking the condition for Lower-Triangular Matrix
			if(i > j)
				printf("%d\t", matrix[i][j]);
			else
				continue;
		}
		printf("\n");
	}
}

// function definition to display the whole matrix
void display(int matrix[R][C])
{
	int i, j = 0;
	int rows = R;
	int columns = C;

	for(i=0; i<rows; i++)
	{
		for(j=0; j<columns; j++)
		{
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
}
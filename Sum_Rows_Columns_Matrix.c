#include<stdio.h>

const int R = 3;
const int C = 3;

// function prototypes
void find_Sum_Of_Rows(int matrix[R][C]);
void find_Sum_Of_Columns(int matrix[R][C]);
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

	// displaying the input matrix
	printf("\nInput Matrix is as follows:- \n");
	display(input_matrix);

	// displaying row sum
	find_Sum_Of_Rows(input_matrix);

	// displaying column sum
	find_Sum_Of_Columns(input_matrix);
}

// function definition to find the sum of individual rows of the matrix
void find_Sum_Of_Rows(int matrix[R][C])
{
	int i, j, row_sum = 0;
	int rows = R;
	int columns = C;

	for(i=0; i<rows; i++)
	{
		row_sum = 0;
		for(j=0; j<columns; j++)
		{
			row_sum += matrix[i][j];
		}
		printf("\nSum of Row %d: %d", i, row_sum);
	}
}

// function definition to find the sum of individual columns of the matrix
void find_Sum_Of_Columns(int matrix[R][C])
{
	int i, j, col_sum = 0;
	int rows = R;
	int columns = C;
	int temp = 0;
	int output_matrix[R][C];

	// exchanging rows and columns
	temp = rows;
	rows = columns;
	columns = temp;

	// transposing the original matrix
	for(i=0; i<rows; i++)
	{
		for(j=0; j<columns; j++)
		{	
			output_matrix[i][j] = matrix[j][i];
		}
	}

	// finding the sum of individual columns of the matrix
	for(i=0; i<rows; i++)
	{
		col_sum = 0;
		for(j=0; j<columns; j++)
		{
			col_sum += output_matrix[i][j];
		}
		printf("\nSum of Column %d: %d\n", i, col_sum);
	}
}

// function definition to display a matrix
void display(int matrix[R][C])
{
	int i, j = 0;
	for(i=0; i<R; i++)
	{
		for(j=0; j<C; j++)
		{
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
}
#include<stdio.h>

const int R = 3;
const int C = 3;

// function prototypes
void display(int matrix[R][C]);
int find_sum_principal(int matrix[R][C]);
int find_sum_counter(int matrix[R][C]);

void main()
{
	int i, j = 0;
	int input_matrix[R][C];
	int sum_of_principal_diagonal = 0;
	int sum_of_counter_diagonal = 0;
	
	printf("\nEnter the matrix elements...\n");
	for(i=0; i<R; i++)
	{
		for(j=0; j<C; j++)
		{
			scanf("%d", &input_matrix[i][j]);
		}
	}

	// displaying the original matrix
	printf("\nInput Matrix is as follows:- \n");
	display(input_matrix);

	// finding and displaying the sum of principal diagonal
	sum_of_principal_diagonal = find_sum_principal(input_matrix);
	printf("\nSum of Principal Diagonal = %d\n", sum_of_principal_diagonal);

	// finding and displaying the sum of counter diagonal
	sum_of_counter_diagonal = find_sum_counter(input_matrix);
	printf("\nSum of Counter Diagonal = %d\n", sum_of_counter_diagonal);
}

// function definition to find out the sum of principal diagonal
int find_sum_principal(int matrix[R][C])
{
	int rows = R;
	int columns = C;
	int i, j, sum_principal = 0;

	for(i=0; i<rows; i++)
	{
		for(j=0; j<columns; j++)
		{
			if(i == j)
				sum_principal += matrix[i][j];
			else
				continue;
		}
	}

	return sum_principal;
}

// function definition to find out the sum of counter diagonal
int find_sum_counter(int matrix[R][C])
{
	int rows = R;
	int columns = C;
	int i, j, sum_counter = 0;

	for(i=0; i<rows; i++)
	{
		for(j=columns-1; j>=0; j--)
		{
			if((i+j) == (columns-1))
				sum_counter += matrix[i][j];
			else
				continue;
		}
	}

	return sum_counter;
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
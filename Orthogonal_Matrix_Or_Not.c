#include<stdio.h>

const int R = 3;
const int C = 3;

// function prototypes
void display(int matrix[R][C]);
int check_Identity_Matrix(int matrix[R][C]);

void main()
{
	int i, j, k, temp, sum = 0;
	int rows = R;
	int columns = C;
	int input_matrix[R][C];
	int transposed_matrix[R][C];
	int product_matrix[R][C];
	

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

	// exchanging the rows and columns
	temp = rows;
	rows = columns;
	columns = rows;

	// transposing the original matrix
	for(i=0; i<rows; i++)
	{
		for(j=0; j<columns; j++)
		{	
			transposed_matrix[i][j] = input_matrix[j][i];
		}
	}

	// matrix multiplication
	for(i=0; i<R; i++)
	{
		for(j=0; j<C; j++)
		{
			for(k=0; k<R; k++)
			{
				sum += input_matrix[i][k] * transposed_matrix[k][j];
			}
			product_matrix[i][j] = sum;
			sum = 0;
		}
	}

	// checking for Identity
	if(check_Identity_Matrix(product_matrix) == 0)
		printf("\nInput Matrix is orthogonal...\n");
	else
		printf("\nInput Matrix is NOT orthogonal...\n");
}

// displaying the matrix
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

// function definition to check whether a matrix is Identity or not
int check_Identity_Matrix(int matrix[R][C])
{
	int i, j, flag, output = 0;
	int rows = R;
	int columns = C;

	for(i=0; i<rows; i++)
	{
		for(j=0; j<columns; j++)
		{
			// checking all the diagonal elements equal to 1
			if((i==j) && (matrix[i][j]==1))
				continue;

			else if((i!=j) && (matrix[i][j]==0))
				continue;
			
			else
			{
				flag = 1;
				break;
			}
		}

		// checking the value of the flag
		if(flag == 1)
		{
			output = 1;
			break;
		}
	}

	// returning the output value
	return output;
}
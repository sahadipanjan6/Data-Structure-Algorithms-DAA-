#include<stdio.h>

const int R = 3;
const int C = 3;

// function prototypes
int check_Identity_Matrix(int matrix[R][C]);
void display(int matrix[R][C]);

void main()
{
	int i, j, identity = 0;
	int input_matrix[R][C];

	printf("\nEnter the matrix elements...\n");
	for(i=0; i<R; i++)
	{
		for(int j=0; j<C; j++)
		{
			scanf("%d", &input_matrix[i][j]);
		}
	}

	// displaying the input matrix
	printf("\nInput Matrix is as follows:- \n");
	display(input_matrix);

	// checking for identity Matrix
	identity = check_Identity_Matrix(input_matrix);
	if(identity == 0)
		printf("\nIt is an Identity Matrix...\n");
	else
		printf("\nIt is NOT an Identity Matrix...\n");
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
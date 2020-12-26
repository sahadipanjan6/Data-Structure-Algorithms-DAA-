#include<stdio.h>
#include<string.h>

// outer structure of the STRUCTURE
struct Book
{
	int book_id;
	float book_price;
	char book_name[100];
}b[3];

void main()
{
	int i = 0;
	int j = 0;
	int max = 3;

	// getting the details of the book
	printf("\nEnter the details of all the books...");
	for(i=0; i<max; i++)
	{
		printf("\nEnter Book_ID: ");
		scanf("%d", &b[i].book_id);
		printf("\nEnter Book_Price: ");
		scanf("%f", &b[i].book_price);
		printf("\nEnter Book_Name: ");
		scanf("%s", &b[i].book_name);
	}

	// displaying all the books details
	printf("\nGetting all the Book Details as follows:- ");
	for(j=0; j<max; j++)
	{
		printf("\nBook_ID: %d", b[j].book_id);
		printf("\nBook_Price: %f", b[j].book_price);
		printf("\nBook_Name: %s", b[j].book_name);
	}
}
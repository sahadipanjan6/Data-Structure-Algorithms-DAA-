#include<stdio.h>
#include<string.h>

// creating the outer structure of the STRUCTURE
struct Book
{
	int book_id;
	float book_price;
	char book_name[100];
};


void main()
{
	// creating an object of the STRUCTURE
	struct Book b;
	printf("\nEnter Book_Id: ");
	scanf("%d", &b.book_id);
	printf("\nEnter Book_Price: ");
	scanf("%f", &b.book_price);
	printf("\nEnter Book_Name: ");
	scanf("%s", &b.book_name);

	// displaying the created Structure
	printf("\nGetting the details of the book...");
	printf("\nID of the Book: %d", b.book_id);
	printf("\nPrice of the Book: %f", b.book_price);
	printf("\nName of the Book: %s", b.book_name);
}
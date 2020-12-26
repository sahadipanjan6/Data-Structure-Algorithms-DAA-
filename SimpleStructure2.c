#include<stdio.h>
#include<string.h>

// declaring the outer structure of the STRUCTURE
struct Book
{
	int book_id;
	float book_price;
	char book_name[100];
}b1, b2;

void main()
{
	// ---------------- entering details of Book 1 ----------------------------
	printf("\nEnter ID of Book1: ");
	scanf("%d", &b1.book_id);
	printf("\nEnter Price of Book1: ");
	scanf("%f", &b1.book_price);
	printf("\nEnter Name of Book1: ");
	scanf("%s", &b1.book_name);

	// ---------------- entering details of Book 2 ---------------------------
	printf("\nEnter ID of Book2: ");
	scanf("%d", &b2.book_id);
	printf("\nEnter Price of Book2: ");
	scanf("%f", &b2.book_price);
	printf("\nEnter Name of Book2: ");
	scanf("%s", &b2.book_name);

	// ---------------- displaying Book 1 ------------------------------------
	printf("\n-------------- DETAILS OF BOOK 1 -----------------");
	printf("\nID of the Book: %d", b1.book_id);
	printf("\nPrice of the Book: %f", b1.book_price);
	printf("\nName of the Book: %s", b1.book_name);

	// ---------------- displaying Book 2 ------------------------------------
	printf("\n-------------- DETAILS OF BOOK 2 -----------------");
	printf("\nID of the Book: %d", b2.book_id);
	printf("\nPrice of the Book: %f", b2.book_price);
	printf("\nName of the Book: %s", b2.book_name);
}
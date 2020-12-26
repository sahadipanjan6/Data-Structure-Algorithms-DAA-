#include<stdio.h>
#include<stdlib.h>

#define size 10

// structure of the STACK
struct Stack
{
	int array[size];
	int top;
}ptr;


// function prototypes
void push();
void pop();
void display();
int checkStackFull();
int checkStackEmpty();


void main()
{
	int choice = 0;
	int contin = 0;
	ptr.top = -1;

	do{
		printf("\nPress 1 for PUSH");
		printf("\nPress 2 for POP");
		printf("\nPress 3 for DISPLAY");
		printf("\nPress 4 for EXIT");
		printf("\nEnter your choice: ");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				// PUSH an element into the Stack
				push();
				break;

			case 2:
				// POP an element from the Stack
				pop();
				break;

			case 3:
				// DISPLAY the Stack
				display();
				break;

			case 4:
				// EXIT from the program
				exit(0);
				break;

			default:
				printf("\nEnter a valid choice!!!");
		}
		printf("\nPress 1 to continue, else press any other number to EXIT: ");
		scanf("%d", &contin);
	}while(contin == 1);
}


// function definition to PUSH an element into the Stack
void push()
{
	int flag = checkStackFull();
	if(flag == 1)
	{
		int element = 0;
		printf("\nEnter the element to be pushed: ");
		scanf("%d", &element);
		ptr.array[++(ptr.top)] = element;
	}
	else
		printf("\nStack is FULL!!!");
}

// function definition to POP an element from the Stack
void pop()
{
	int flag = checkStackEmpty();
	if(flag == 1)
	{
		printf("\nPopped Element: %d", (ptr.array[(ptr.top)--]));
	}
	else
		printf("\nStack is EMPTY!!!");
}

// function definition to DISPLAY the Stack
void display()
{
	int i = 0;
	int flag = checkStackEmpty();

	if(flag == 1)
	{
		printf("\nElements present in the Stack are:- \n");
		for(i=(ptr.top); i>-1; i--)
		{
			printf("%d\t", (ptr.array[i]));
		}
		printf("\n");
	}
	else
		printf("\nStack is EMPTY!!!");
}

// function definition to check whether the Stack is FULL or not
int checkStackFull()
{
	if((ptr.top) == size-1)
		return 0;

	return 1;
}

// function definition to check whether the Stack is EMPTY or not
int checkStackEmpty()
{
	if((ptr.top) == -1)
		return 0;

	return 1;
}
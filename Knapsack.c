#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_WEIGHT 20
#define MAX_ARR_SIZE 3

// defining the structure of the OBJECTS
struct Object
{
	char *name;
	float profit;
	float weight;
	float pw_ratio;
};

// function prototypes
void sort_decreasing(struct Object arr[]);

// driver program
void main()
{
	int i, j, k = 0;
	int remaining_weight = MAX_WEIGHT;  // weight remaining in the knapsack to be filled in
	double total_profit = 0.0;

	// creating 3 objects
	struct Object obj[MAX_ARR_SIZE];

	// setting the names of the objects
	obj[0].name = "Object1";
	obj[1].name = "Object2";
	obj[2].name = "Object3";

	// getting the data of the objects from the user
	for(i=0; i<MAX_ARR_SIZE; i++)
	{
		printf("\nEnter PROFIT%d: ", (i+1));
		scanf("%f", &obj[i].profit);
		printf("\nEnter WEIGHT%d: ", (i+1));
		scanf("%f", &obj[i].weight);
	}

	// calculating the (Profit/Weight) ratio of all the objects
	for(j=0; j<MAX_ARR_SIZE; j++)
		obj[j].pw_ratio = (obj[j].profit / obj[j].weight);
	
	// displaying the objects
	printf("\nObject Details:- \n");
	for(k=0; k<MAX_ARR_SIZE; k++)
	{
		printf("\n------------------------------");
		printf("\nNAME: %s", obj[k].name);
		printf("\nPROFIT: %f", obj[k].profit);
		printf("\nWEIGHT: %f", obj[k].weight);
		printf("\nProfit/Weight Ratio: %f", obj[k].pw_ratio);
	}
	printf("\n");

	// Sorting the Objects based on Profit/Weight ratio
	sort_decreasing(obj);

	// displaying the Objects after sorting in decrasing order
	printf("\nObjects after Sorting:- \n");
	for(i=0; i<MAX_ARR_SIZE; i++)
	{
		printf("\n------------------------------");
		printf("\nNAME: %s", obj[i].name);
		printf("\nPROFIT: %f", obj[i].profit);
		printf("\nWEIGHT: %f", obj[i].weight);
		printf("\nProfit/Weight Ratio: %f", obj[i].pw_ratio);
	}
	printf("\n");

	// finding the total weights with the maximum profit
	for(i=0; i<MAX_ARR_SIZE; i++)
	{
		if((remaining_weight>0) && (obj[i].weight<=remaining_weight))
		{
			remaining_weight = remaining_weight - obj[i].weight;
			total_profit = total_profit + obj[i].profit;
			printf("\nObject with profit %f and weight %f is selected...", obj[i].profit, obj[i].weight);
			printf("\nRemaining Capacity in the KnapSack: %d", (remaining_weight));
			printf("\nTotal Profit upto now: %f", total_profit);
		}
		else if(remaining_weight > 0)
		{
			total_profit = total_profit + ((obj[i].profit * remaining_weight) / obj[i].weight);
			printf("\nObject with profit %f and weight %f is selected...", obj[i].profit, obj[i].weight);
			printf("\nRemaining Capacity in the KnapSack: %d", (remaining_weight));
			printf("\nTotal Profit upto now: %f", total_profit);
			break;
		}	
	}

	printf("\n\nTotal Profit of Knapsack: %f\n", total_profit);	
}

// function definition to sort Objects according to profit/weight ratio 
void sort_decreasing(struct Object arr[])
{
	int i, j = 0;
	float temp = 0;
	char *temp1;

	for(i=0; i<MAX_ARR_SIZE; i++)
	{
		for(j=i+1; j<MAX_ARR_SIZE; j++)
		{
			if(arr[i].pw_ratio < arr[j].pw_ratio)
			{
				// swap the elements of the objects
				// 1. swapping the pw_ratios
				temp = arr[j].pw_ratio;
				arr[j].pw_ratio = arr[i].pw_ratio;
				arr[i].pw_ratio = temp;

				// 2. swapping the names
				temp1 = arr[j].name;
				arr[j].name = arr[i].name;
				arr[i].name = temp1;

				// 3. swapping the profits
				temp = arr[j].profit;
				arr[j].profit = arr[i].profit;
				arr[i].profit = temp;

				// 4. swapping the weights
				temp = arr[j].weight;
				arr[j].weight = arr[i].weight;
				arr[i].weight = temp;
			}
		}
	}
}



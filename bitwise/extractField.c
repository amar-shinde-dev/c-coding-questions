#include <stdio.h>
#include <stdbool.h>
#include "mybitheader.h"

typedef unsigned int uint;

#define YES true
#define NO false

uint extractFieldValue(uint num, uint pos, uint range)
{
	uint result=0;

	result = (num >> pos) & ((1U << range) - 1 );

	return result;
}

int main()
{
	uint num, pos, range;

	printf("enter the number\n");
	scanf("%d",&num);

	printf("enter the pos\n");
	scanf("%d",&pos);

	printf("enter the range\n");
	scanf("%d",&range);


	printf("number:");
	print_bin(num);

	uint extractedVal= extractFieldValue(num, pos, range);

	printf("Extracted values: %d\n", extractedVal);
	printf("Exctracted: ");
	print_bin(extractedVal);
}


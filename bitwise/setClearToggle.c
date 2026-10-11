#include <stdio.h>
#include <stdbool.h>
#include "mybitheader.h"

typedef unsigned int uint;

#define YES true
#define NO false

// Set, clear, toggle
#define SETBIT(num,pos)  ( num |= (1 << pos))
#define CLEARBIT(num,pos)  ( num &= ~(1 << pos))
#define TOGGLEBIT(num,pos)  ( num ^= (1 << pos))

// count the number of set bits
int countSetBits(uint num)
{
	int count=0;

	while(num)
	{
		num = num & ( num -1 );
		count++;
	}
	return count;
}

// check an unsigned integer is even or odd
bool isNumOdd(uint num)
{
	if(num & 1)
		return YES;
	else
		return NO;
}

// check power of two
bool isPowerOfTwo(uint num)
{
	if(num & (num-1))
		return NO;
	else
		return YES;
}

int main()
{
	uint num;
	int pos;

	printf("enter the number\n");
	scanf("%d",&num);

	printf("enter the pos\n");
	scanf("%d",&pos);

	print_bin(num);

	SETBIT(num,pos);
	print_bin(num);

	CLEARBIT(num,pos);
	print_bin(num);

	TOGGLEBIT(num,pos);
	print_bin(num);

	int countOfsetBits=countSetBits(num);

	printf("total count of set bit: %d\n", countOfsetBits);

	if(isNumOdd(num)==YES)
		printf("number is odd\n");
	else
		printf("number is even\n");


	if(isPowerOfTwo(num)==YES)
		printf("number is power of two\n");
	else
		printf("number is not power of two\n");

	return 0;
}

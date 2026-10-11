#include <stdio.h>
#include <stdbool.h>
#include "mybitheader.h"

typedef unsigned int uint;

#define YES true
#define NO false

bool isDiffByOneBit(uint a, uint b)
{
	uint diff= a ^ b;

	if( (diff != 0) && (diff & (diff-1) == 0) )
		return YES;
	else
		return NO;
}

int main()
{
	uint a= 10, b=15;

	if(isDiffByOneBit(a,b) == YES)
		printf("YES!!!");
	else
		printf("NO!!!");

}


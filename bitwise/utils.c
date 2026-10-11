#include<stdio.h>

#include "mybitheader.h"



void print_bin(uint num)
{

	int pos;

	for(pos=31 ; pos >= 0 ; pos-- )
	{

		printf("%d",( num >> pos) & 1 );

	}
	printf("\n");
}

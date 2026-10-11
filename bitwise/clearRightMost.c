#include <stdio.h>
#include <stdbool.h>
#include "mybitheader.h"
#include <math.h>


typedef unsigned int uint;

// clear the rightmost set bit 00110100 => 00110000
void clearRightMostBit(uint *numAddr)
{
	*numAddr &= (*numAddr - 1); 
}

// find the position of rightmost set bit
void isolateRightMostSetBit(uint num)
{
 	int pos=0;
        int temp;
	
	printf("before isolate: \n");
	print_bin(num);

	num = num & -num;    // -num == 2' compliment
		
	temp=num;	
	
	while(num)
	{
		num >>= 1;
		pos++;
	}

	printf("after isolate: \n");
	print_bin(temp);
	printf("position of isolate bit: %d\n",pos);
	
	
	//if ( log2n(num) == pos )
	//	printf("log and manual calc is correct\n");
	//else
	//	printf("log and manual calc is correct\n");

}

int main()
{
	int num, temp;
	printf("enter the number\n");
	scanf("%d",&num);

	temp=num;
	print_bin(temp);

	clearRightMostBit(&temp);

	print_bin(temp);

	temp=num;
	isolateRightMostSetBit(temp);

}

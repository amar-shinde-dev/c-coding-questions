
#include <stdio.h>
#include "mybitheader.h"

void reverseBitsbyFor(int *num)
{
	printf("before: ");
	print_bin(*num);
	
	int i,j;
	for(i=0, j=31; i<16;i++,j--)
	{
		if( ((*num >> i) & 1) != ((*num >> j) & 1) )
		{
			*num ^= (1<<i);
			*num ^= (1<<j);
		}
	}

	printf(" after: ");
	print_bin(*num);
}

void reverseBitsbyMaks(uint num)
{

	num = (( num & 0xffff0000) >> 16)| (( num & 0x0000ffff) << 16) ;
	
	num = (( num & 0xff00ff00) >> 8) | (( num &0x00ff00ff) << 8);
	
	num = (( num & 0xf0f0f0f0) >> 4) | (( num &0x0f0f0f0f) << 4);
	
	num = (( num & 0x33333333) << 2) | (( num & 0xcccccccc) >> 2);
	
	num = (( num & 0x55555555) << 1) | (( num & 0xaaaaaaaa) >> 1);
	
	/*
	num =   (( num & 0xff000000) >> 8) | 
	        (( num & 0x00ff0000) << 8) | 
		(( num & 0x0000ff00) >> 8) | 
		(( num & 0x000000ff) << 8) ;
	*/

	/*
	num =   (( num & 0xf0000000) >> 4) | 
		(( num & 0x0f000000) << 4) |
		(( num & 0x00f00000) >> 4) |
		(( num & 0x000f0000) << 4) |
		(( num & 0x0000f000) >> 4) |
		(( num & 0x00000f00) << 4) |
		(( num & 0x000000f0) >> 4) |
		(( num & 0x0000000f) << 4) ;
	*/

	/*
	num =   (( num & 0x30000000) >> 2) |
                (( num & 0x03000000) << 2) |
                (( num & 0x00300000) >> 2) |
                (( num & 0x00030000) << 2) |
                (( num & 0x00003000) >> 2) |
                (( num & 0x00000300) << 2) |
                (( num & 0x00000030) >> 2) |
                (( num & 0x00000003) << 2) ;
	*/
	
	
	printf("after1: ");
	print_bin(num);
}

int main()
{
	uint num=54848515;

	reverseBitsbyFor(&num);
	reverseBitsbyMaks(num);
}

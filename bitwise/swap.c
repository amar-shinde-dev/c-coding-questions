#include<stdio.h>
#include "mybitheader.h"

int main()
{
	uint a,b;
	
	printf("enter the two numbers\n");
	scanf("%d",&a);
	scanf("%d",&b);

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("After swap a= %d b= %d\n",a,b);

	uint num=0x12345678;

	num = ( num & 0xff000000 ) >> 24 |
	      (	num & 0x00ff0000 ) >> 8  |
	      ( num & 0x0000ff00 ) << 8  |
	      ( num & 0x000000ff ) << 24 ;

	printf("after nibble swap: %x\n",num);

}

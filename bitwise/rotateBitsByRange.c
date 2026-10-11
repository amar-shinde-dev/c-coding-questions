
#include <stdio.h>
#include "mybitheader.h"


// Macro for right rotate
#define ROTATERIGHT(num,rotateValue)  ( (num >> rotateValue) | (num << (32-rotateValue)) )

void rotateBitsByrotateVal(uint *num,uint rotateValue)
{

	rotateValue = rotateValue % 32;

	if (rotateValue == 0 || rotateValue == 32)
		return;
	
	uint mask;

	mask = ((*num) >> (32-rotateValue));

	*num = *num << rotateValue;

	*num = *num | mask;

	return;

}


int main()
{
	
	uint num;
	uint rotateValue;
	printf("enter the number\n");
	scanf("%d",&num);

	printf("enter the rotation value\n");
	scanf("%d",&rotateValue);

	printf("Before: ");
	print_bin(num);
	
	rotateBitsByrotateVal(&num,rotateValue);

	printf(" After: ");
	print_bin(num);
	
	printf("Before right rotate: ");
	print_bin(num);

	num = ROTATERIGHT(num,rotateValue);
	
	printf(" after right rotate: ");
	print_bin(num);

	return 0;
}


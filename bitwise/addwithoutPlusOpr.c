#include<stdio.h>
#include "mybitheader.h"

unsigned int add(unsigned int a, unsigned int b) {
    while (b != 0) {
        // Find the bits that generate a carry
        unsigned int carry = a & b;

        // Add the bits without considering the carry
        a = a ^ b;

        // Shift the carry left so it is added to the next significant bit position
        b = carry << 1;
    }
    return a;
}

int main()
{
	uint a,b;
	uint sum;
	printf("enter the two numbers\n");
	scanf("%d",&a);
	scanf("%d",&b);

	sum = add(a, b);
	
	printf("sum1: %d\n",a+b);
	printf("sum2: %d\n",sum);

}

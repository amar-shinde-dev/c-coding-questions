
// check LSB bit is set or not

#include<stdio.h>
#include<stdbool.h>
#include "mybitheader.h"

bool checkLSB(unsigned int Num)
{
    if(Num & 1)
	    return true;
    else
	    return false;
}

int main()
{
    unsigned int num;
    printf("enter the number\n");
    scanf("%d",&num);

    print_bin(num);
    if( checkLSB(num) == 1)
        printf("LSB is set\n");
    else
        printf("LSB is not set\n");

    return 0;
}


#include <stdio.h>
#include <stdbool.h>
#include "mybitheader.h"


//  Find the only element occurring once in an array where every other element occurs exactly twice
int getOnlyOneOccurenceElment(int *arr, int n)
{
	if (n==0)
	{
		printf("please pass valid number\n");	
		return 0;
	}
	
	int result=0;

	for( int i=0; i < n; i++)
	{
		result = result ^ arr[i];
	}
	return result;
}

// Find two elements that occur once when every other array element occurs exactly twice
int getOnlyOneOccurenceElment(int *arr, int n)
{
	int result
}


int main()
{
	int n;
	
	printf("enter the number of elements\n");
	scanf("%d",&n);

	int arr[n];
	printf("enter the array elements\n");
	for(int i=0; i < n ; i++)
		scanf("%d",&arr[i]);


	printf("Your array: ");
    	for(int i = 0; i < n; i++) 
	{
        	printf("%d ", arr[i]);
    	}
    	printf("\n");

	int ele=getOnlyOneOccurenceElment(arr, n);

	printf("getOnlyOneOccurenceElment= %d\n",ele);

}



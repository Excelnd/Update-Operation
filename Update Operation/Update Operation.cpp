// Update Operation.cpp : Defines the entry point for the console application.
//
#include <stdio.h>
#include "stdafx.h"


int main()
{
	int LA[] = { 1,2,4,7,8 };
	int k = 4, n = 5, item = 10;
	int i, j;

	printf("The original array elements are :\n");

	for (i = 0; i < n; i++)
	{
		printf("LA[%d] = %d \n", i, LA[i]);
	}

	LA[k-1] = item;

	printf("The original array elements are :\n");

	for (i = 0; i < n; i++)
	{
		printf("LA[%d] = %d \n", i, LA[i]);
	}

    return 0;
}


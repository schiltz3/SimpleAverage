#include <stdio.h>
#include "SimpleAverage.h"

#define MAX 100

int main()
{
	struct simple_average_s low;

	if (initSimpleAverage(&low, MAX) == -1)
	{
		printf("Error: initSimpleAverage failed");
	}
	printSimpleAverage(&low);

	printf("--------------------------------\n");

	for (int i = 0; i <= MAX / 2; i++)
	{
		if (updateSimpleAverage(&low, i) == -1)
		{
			printf("Error: updateSimpleAverage failed");
		}
	}
	int average = (int)getSimpleAverage(&low);
	if (average == -1)
	{
		printf("Error: getSimpleAverage failed");
	}
	else
	{

		printf("SimpleAverage: %d\n", average);
	}

	printSimpleAverage(&low);

	return (0);
}
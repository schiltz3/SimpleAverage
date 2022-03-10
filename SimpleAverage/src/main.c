#include <stdio.h>
#include "SimpleAverage.h"

#define MAX UINT16_MAX

void printSimpleAverage(struct simple_average_s *average);

int main()
{
	struct simple_average_s low;

	if (initSimpleAverage(&low) == -1)
	{
		printf("Error: initSimpleAverage failed");
	}
	printSimpleAverage(&low);

	printf("--------------------------------\n");

	for (int i = 0; i < MAX + 1; i++)
	{
		int ret = updateSimpleAverage(&low, i);
		if (ret == -1)
		{
			printf("Error: updateSimpleAverage failed");
		}
		else if (ret == 1)
		{
			printf("Error: updateSimpleAverage, max has been reached\n");
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
void printSimpleAverage(struct simple_average_s *average)
{
	if (average == NULL)
	{
		return;
	}
	printf("Average_agg: %d\n", average->sum);
	printf("Current count: %d\n", average->count);
}

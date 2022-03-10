#ifndef SIMPLE_AVERAGE_H
#define SIMPLE_AVERAGE_H

#include <stdio.h>
#include <stdbool.h>

struct simple_average_s
{
  float average_agg;
  int count;
  int max;
};

void printSimpleAverage(struct simple_average_s *average);
int initSimpleAverage(struct simple_average_s *average, int max);
int updateSimpleAverage(struct simple_average_s *average, int update);
float getSimpleAverage(struct simple_average_s *average);

#endif
#include "SimpleAverage.h"

int initSimpleAverage(struct simple_average_s *average, int max)
{
  if (average == NULL)
  {
    return -1;
  }

  average->average_agg = 0.0;
  average->count = 0;
  average->max = max;

  return 0;
}

int updateSimpleAverage(struct simple_average_s *average, int update)
{
  if (average == NULL)
  {
    return -1;
  }
  if (average->count >= average->max)
  {
    return 1;
  }

  if (average->count < average->max)
  {
    average->average_agg += (float)update / average->max;
    ++average->count;
  }

  return 0;
}

float getSimpleAverage(struct simple_average_s *average)
{
  if (average == NULL)
  {
    return -1;
  }
  return average->average_agg * ((float)average->max / average->count);
}
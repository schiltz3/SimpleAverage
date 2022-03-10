#include "SimpleAverage.h"

int initSimpleAverage(struct simple_average_s *average)
{
  if (average == NULL)
  {
    return -1;
  }

  average->sum = 0.0;
  average->count = 0;

  return 0;
}

int updateSimpleAverage(struct simple_average_s *average, uint16_t update)
{
  if (average == NULL)
  {
    return -1;
  }

  if (average->count >= MAX_COUNT)
  {
    return 1;
  }
  else
  {
    average->sum += update;
    ++average->count;
  }

  return 0;
}

uint16_t getSimpleAverage(struct simple_average_s *average)
{
  if (average == NULL)
  {
    return -1;
  }
  return average->sum / average->count;
}
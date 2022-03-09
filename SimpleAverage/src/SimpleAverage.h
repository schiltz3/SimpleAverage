#ifndef SIMPLE_AVERAGE_H
#define SIMPLE_AVERAGE_H

#include <stdio.h>
#include <stdbool.h>

void print(char* print);

struct simple_average_s{
  float average;
  int count;
  int max;
  bool active;
};

#endif
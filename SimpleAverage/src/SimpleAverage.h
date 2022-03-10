#ifndef SIMPLE_AVERAGE_H
#define SIMPLE_AVERAGE_H

#include <stdio.h>
#include <stdbool.h>


/**
 * @brief Struct for SimpleAverage.h
 *
 */
struct simple_average_s
{
  float average_agg; //<! Aggregate the adjusted update values
  int count;         //<! Number of updates to the average
  int max;           //<! Number of max updates
};

/**
 * @brief Initialize simple_average_s struct
 * 
 * @param average Pointer to struct to update
 * @param max Max number of updates you can accumulate
 * @return int -1 = error, 0 = Ok
 */
int initSimpleAverage(struct simple_average_s *average, int max);

/**
 * @brief Update simple_average_s struct
 * 
 * @param average Pointer to struct to update
 * @param update Value to update average accumulator with
 * @return int -1 = error, 0 = Ok, 1 = max has been reached
 */
int updateSimpleAverage(struct simple_average_s *average, int update);

/**
 * @brief Get the current average
 * 
 * @param average Pointer to struct to get the current average from
 * @return float Current average
 */
float getSimpleAverage(struct simple_average_s *average);

#endif
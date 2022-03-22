#ifndef SIMPLE_AVERAGE_H
#define SIMPLE_AVERAGE_H

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

#define MAX_COUNT UINT16_MAX

/**
 * @brief Struct for SimpleAverage.h
 *
 */
struct simple_average_s
{
  uint32_t sum;   //<! sum of values
  uint16_t count; //<! Number of elements added
};

/**
 * @brief Initialize simple_average_s struct
 *
 * @param average Pointer to struct to update
 * @return int -1 = error, 0 = Ok
 */
int InitSimpleAverage(struct simple_average_s *average);

/**
 * @brief Update simple_average_s struct
 *
 * @param average Pointer to struct to update
 * @param update Value to update average accumulator with
 * @return int -1 = error, 0 = Ok, 1 = max has been reached
 */
int UpdateSimpleAverage(struct simple_average_s *average, uint16_t update);

/**
 * @brief Get the current average
 *
 * @param average Pointer to struct to get the current average from
 * @return float Current average
 */
uint16_t GetSimpleAverage(struct simple_average_s *average);

#endif
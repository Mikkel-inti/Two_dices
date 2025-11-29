#ifndef DICE_HELPERS_H
#define DICE_HELPERS_H

#include <stdio.h>

/**
 * @brief Sums two the dice roll using rand().
 * @return int the dice sum.
 */
int dice_sum(void);

/**
 * @brief Printing out the occurrence of each number from 2- 12.
 *
 * @param arr[] . An array where the occurrence count is
 * @param n . The length of the occurrence array
 */
void print_arr(int arr[], size_t n);

#endif // DICE_HELPERS_H

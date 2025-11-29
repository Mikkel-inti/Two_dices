/**
 * @file dice_helpers.c
 * @brief Implementation of helper functions used for the dice simulation and
 * printing the occurrences.
 * Created for DTU course: 62712 - Basic C Programming (Week 12)
 * Author: Mikkel Olsen
 * Date: October 2025
 */

#include "dice_helpers.h"
#include <stdio.h>
#include <stdlib.h>

int dice_sum(void) {
  int d1 = (rand() % 6) + 1;
  int d2 = (rand() % 6) + 1;
  return d1 + d2;
}

void print_arr(int arr[], size_t n) {
  for (int i = 2; i < n; i++) {
    printf("%d: %d\n", i, arr[i]);
  }
}
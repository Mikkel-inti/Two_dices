/**
 * @file main.c
 * @brief Simulate 50.000 rolls with two dices.
 *
 * Created for DTU course: 62712 - Basic C Programming (Week 12)
 * Author: Mikkel Olsen
 * Date: November 2025
 */

#include "dice_helpers.h" // Helper functions
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TOTAL_ROLLS 50000 // Total rolls the simulation should take

int occurrence_arr[13] = {0}; // Store the occurence of a number (2 - 12)

int main() {

  // Using the current time
  // to set a random seed for the simulation
  srand(time(NULL));

  // Simulate the rolls
  // and counting the occurrence of the sums.
  for (size_t i = 0; i < TOTAL_ROLLS; i++) {
    occurrence_arr[dice_sum()]++;
  }

  // Printing the occurence:
  print_arr(occurrence_arr, 13);
}
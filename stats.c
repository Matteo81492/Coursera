/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *****************************************************************************/
/**
 * @Week 1 application assingment 
 * @Exercise regarding simple statistical operations 
 * @author <Matteo Bovino>
 * @date <10/07/2020>
 *
 */
 
#include <stdio.h>
#define SIZE (40)
#include "stats.h"

unsigned char minimum, maximum, median, mean;                                   //Variable declaration.
int loop, total, j, i, temp;                                                     

int main() {                                                                    //main function.

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,           //array of 40 elements.
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  
  print_array(test);                                                            //calling each function defined in stats.h
  minimum =find_minimum(test);
  maximum = find_maximum(test);
  mean = find_mean(test);
  median =find_median(test);
  print_statistics();
  sort_array(test);
 
  return 0;

}
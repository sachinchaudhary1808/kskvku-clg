/* Copyright by: Sachin
Date: 2025-07-21 10:09 pm
CP(10): Write a C program that uses the sizof operator to determine and print
the size (in bytes) of the int,float,char and `double` dataypes on your
system.*/

#include <stdio.h>

void main() {
  printf("Size of int is %zu byte\n", sizeof(int));
  printf("Size of float is %zu byte\n", sizeof(float));
  printf("Size of char is %zu byte\n", sizeof(char));
  printf("Size of double is %zu byte\n", sizeof(double));

  // using zu cuz  of warning of unsiged long by using just %u or %d
  // sizeof returns a size_t
  // size_t is an unsigned type, but not guaranteed to be unsigned int
}

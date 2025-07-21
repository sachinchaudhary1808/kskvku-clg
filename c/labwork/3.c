/* Copyright by: Sachin
Date: 2025-07-21 6:36 pm
PS(3): Write a C programm that takes a floating number then reads it and prints
exacly 2 decimal places to the console */

#include <stdio.h>

void main() {
  float a;
  printf("Enter a floating number: ");
  scanf("%f", &a);

  printf("You entered %.2f", a);
}

/*
 * Copyright by: Sachin
 * Date: 23/8/2025 11:26 am
 * PS(1): Write a C program to check wheather a given number is positive,
 * negeative, or zero using if statement.
 */

#include <stdio.h>

void main() {
  int a;
  printf("enter a number to check weather it's positive negative or zero: ");
  scanf("%d", &a);

  if (a > 0) {
    printf("\nThe number is Positive.");
  } else if (a < 0) {
    printf("\nThe number is Nagative.");
  } else {
    printf("\nThe number is Zero");
  }
}

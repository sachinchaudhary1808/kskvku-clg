/*
 * Copyright by: Sachin
 * Date: 2025-08-26 05:16 am
 * PS(4): Write a C program to check wheather a given year is a leap year or
 * not.
 */

#include <stdio.h>

void main() {
  int year;

  printf("Enter a year to check weather it's leap year or not: ");
  scanf("%d", &year);

  // if (year % 4 == 0) {
  //   if (year % 100 == 0) {
  //     if (year % 400 == 0) {
  //       printf("%d is a leap year", year);
  //     } else {
  //       printf("%d is not a leap year", year);
  //     }
  //   } else {
  //     printf("%d is a leap year", year);
  //   }
  // } else {
  //   printf("%d is not a leap year", year);
  // }

  if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
    printf("%d is a leap year", year);
  } else {
    printf("%d is not a leap year", year);
  }
}

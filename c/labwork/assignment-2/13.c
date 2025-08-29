/*
 * Copyright by: Sachin
 * Date: 2025-08-29 01:09 am
 * PS(13):Write a C program to display the month name based on month number
 *(1-12) using switch.
 */

#include <stdio.h>

void main() {
  int month;

  printf("Enter the month: ");
  scanf("%d", &month);

  switch (month) {
  case 1:
    printf("January");
    break;
  case 2:
    printf("February");
    break;
  case 3:
    printf("March");
    break;
  case 4:
    printf("April");
    break;
  case 5:
    printf("May");
    break;
  case 6:
    printf("June");
    break;
  case 7:
    printf("July");
    break;
  case 8:
    printf("August");
    break;
  case 9:
    printf("September");
    break;
  case 10:
    printf("October");
    break;
  case 11:
    printf("November");
    break;
  case 12:
    printf("December");
    break;
  default:
    printf("Invalid number");
  }
}

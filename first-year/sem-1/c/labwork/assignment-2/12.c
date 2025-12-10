/*
 * Copyright by: Sachin
 * Date: 2025-08-28 23:59 pm
 * PS(12): Write a C program to display the day of the week using switch
 *(1=Sunday ... 7=Saturday).
 */

#include <stdio.h>

void main() {
  int day;

  printf("Enter the day: ");
  scanf("%d", &day);

  switch (day) {
  case 2:
    printf("Monday");
    break;
  case 3:
    printf("Tuesday");
    break;
  case 4:
    printf("Wednesday");
    break;
  case 5:
    printf("Thursday");
    break;
  case 6:
    printf("Friday");
    break;
  case 7:
    printf("Saturday");
    break;
  case 1:
    printf("Sunday");
    break;
  default:
    printf("Invalid number");
  }
}

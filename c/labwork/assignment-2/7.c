/*
 * Copyright by: Sachin
 * Date: 2025/8/28 10:48 am
 * PS(7): Write a C program to check whether a number is divisible by both 5
 * and 11.
 */

#include <stdio.h>

void main() {
  int num;

  printf("Enter a number: ");
  scanf("%d", &num);

  if (num % 5 == 0) {
    if (num % 11 == 0) {
      printf("Yes number is divisible by both 5 and 11");
    } else {
      printf("number is divisible by 5 but not by 11");
    }
  } else if (num % 11 == 0) {
    printf("number is divisible by 11 but not 5");
  } else {
    printf("number is not divisible by both");
  }
}

/*
 * Copyright by: Sachin
 * Date: 23-08-2025 11:45 am
 * PS(2): Write a C program to check whether a given number is even or odd using
 * if-else.
 */

#include <stdio.h>

void main() {
  int num;

  printf("Enter a number: ");
  scanf("%d", &num);

  if (num % 2 == 0) {
    printf("Even");
  } else {
    printf("Odd");
  }
}

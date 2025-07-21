/* Copyright by: Sachin
Date: 2025-07-21 6:55 pm
PS(5): Write a C programm that prompts the user to enter 2 integers. The
programm then should calculate the sum and print the result to the
console*/

#include <stdio.h>

void main() {
  int a, b;
  printf("Enter the first number: ");
  scanf("%d", &a);

  printf("Enter the second number: ");
  scanf("%d", &b);

  printf("The sum of %d and %d = %d", a, b, (a + b));
}

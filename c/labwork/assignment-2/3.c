/*
 * Copyright by: Sachin
 * Date: 2025-08-26 05:08 am
 * PS(3): Write a C program to find the largest of two numbers using if-else
 */

#include <stdio.h>

void main() {
  int a, b;

  printf("Enter the First number: ");
  scanf("%d", &a);

  printf("Enter the Second number: ");
  scanf("%d", &b);

  if (a > b) {
    printf("%d is largest.", a);
  } else if (b > a) {
    printf("%d is largest.", b);
  } else {

    printf("%d and %d are same.", a, b);
  }
}

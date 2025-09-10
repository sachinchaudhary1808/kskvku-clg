/*
 * Copyright by: Sachin
 * Date: 2025-08-29 21:50 am
 * PS(27): Write a C program to find the LCM of two numbers using while.
 */

#include <stdio.h>

void main() {
  int a, b, lcm;

  printf("Enter the number a: ");
  scanf("%d", &a);
  printf("Enter the number b: ");
  scanf("%d", &b);

  if (a == 0 || b == 0) {
    printf("The lcm is zero");
  }

  lcm = a > b ? a : b;

  while (1) {
    if (lcm % a == 0 && lcm % b == 0) {
      printf("%d is The GOAT", lcm);
      break;
    }
    lcm++;
  }
}

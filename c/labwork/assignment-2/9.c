/*
 * Copyright by: Sachin
 * Date: 2025-08-28 12:14 pm
 * PS(9): Write a C program to check whether a number is prime or not, using a
 * while loop.
 */

#include <stdio.h>

void main() {
  int num, i = 2, isprime = 1;

  printf("Enter a number to check if it's prime or not: ");
  scanf("%d", &num);

  if (num <= 1) {
    printf("%d is not prime", num);
    return;
  }

  while (i < num) {
    if (num % i == 0) {
      printf("%d is not a prime", num);
      isprime = 0;
      break;
    }
    i++;
  }
  if (isprime == 1) {
    printf("%d is prime", num);
  }
}

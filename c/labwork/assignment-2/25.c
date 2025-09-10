/*
 * Copyright by: Sachin
 * Date: 2025-08-29 15:12 am
 * PS(25): Write a C program to count the total number of digits in a number
 * using while
 */

#include <stdio.h>

void main() {
  int num, digits = 0, ori_num;

  printf("Enter the number: ");
  scanf("%d", &num);

  ori_num = num;

  while (num > 0) {
    num /= 10;
    digits++;
  }

  printf("%d has %d digits", ori_num, digits);
}

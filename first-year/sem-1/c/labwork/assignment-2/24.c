/*
 * Copyright by: Sachin
 * Date: 2025-08-29 15:12 am
 * PS(24): Write a C program to generate Fibonacci series up to N terms using
 * while.
 */

#include <stdio.h>

void main() {
  int N, i = 0, pre = 0, pre2 = 1, currunt;

  printf("Enter a number: ");
  scanf("%d", &N);

  int count = 1;
  while (i < N) {
    if (i <= 1) {
      printf("(%d) %d ", count, i);
    } else {
      currunt = pre2 + pre;
      pre = pre2;
      pre2 = currunt;
      printf("(%d) %d ", count, currunt);
    }
    i++;
    count++;
  }
}

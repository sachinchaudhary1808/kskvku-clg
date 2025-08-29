/*
 * Copyright by: Sachin
 * Date: 2025-08-29 15:12 am
 * PS(24): Write a C program to generate Fibonacci series up to N terms using
 * while.
 */

#include <stdio.h>

void main() {
  int N, currunt = 0, pre = 1, pre2 = 0, i = 3;

  printf("Enter the number: ");
  scanf("%d", &N);

  if (N >= 1) {
    printf("%d\n", pre2);
  }
  if (N >= 2) {
    printf("%d\n", pre);
  }

  while (i <= N) {
    currunt = pre + pre2;
    pre2 = pre;
    pre = currunt;
    i++;
    printf("%d\n", currunt);
  }
}

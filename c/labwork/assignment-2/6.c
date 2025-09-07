/*
 * Copyright by: Sachin
 * Date 2025-08-27 6:55 am
 * PS(6): Write a C program to find the largest number among three using nested
 * if.
 */

#include <stdio.h>

void main() {
  int a, b, c;

  printf("Number a: ");
  scanf("%d", &a);

  printf("Number b: ");
  scanf("%d", &b);

  printf("Number c: ");
  scanf("%d", &c);

  if (a > b && a > c) {
    printf("a is the largest");
  } else if (b > c) {
    printf("b is the largest");
  } else {
    printf("c is the largest");
  }
}

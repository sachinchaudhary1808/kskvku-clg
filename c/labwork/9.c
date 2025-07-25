/* Copyright by: Sachin
Date: 2025-07-21 9:53 pm
PS(9): Write a C program that prompts the user to enter two integers. The
program should then swap the values of this two variables without using a third
variables, and finally print the values of variables before and after swapping.
*/

#include <stdio.h>

void main() {
  int a, b, c;
  printf("Swapping variables\n");
  printf("Enter int a: ");
  scanf("%d", &a);
  printf("Enter int b: ");
  scanf("%d", &b);

  printf("variables before swap %d, %d\n", a, b);

  c = a;
  a = b;
  b = c;

  printf("variables after swap %d, %d\n", a, b);
}

// Sir will teach how to do it with only 2 variables

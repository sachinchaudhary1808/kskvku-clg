/* Copyright by: Sachin
Date: 2025-07-21 7:08 pm
PS(6): Write a program that prompts user to enter 2 integers. The program then
should perform following things and print it the the console
    Addition;
    Subtraction;
    Multiplication;
    Division;
    Modulus;
*/

#include <stdio.h>

void main() {
  int a, b;
  printf("Enter the first number: ");
  scanf("%d", &a);

  printf("Enter the second number: ");
  scanf("%d", &b);

  printf("%d + %d = %d\n", a, b, (a + b));
  printf("%d - %d = %d\n", a, b, (a - b));
  printf("%d * %d = %d\n", a, b, (a * b));
  printf("%d / %d = %d\n", a, b, (a / b));
  printf("%d %% %d = %d\n", a, b, (a % b));
}

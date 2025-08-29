/*
 * Copyright by: Sachin
 * Date: 2025-08-28 22:49 pm
 * PS(11): Write a C program to make a simple calculator using switch that
 * performs +, -, *, / operations.
 */

#include <stdio.h>
void main() {
  float a, b;
  char operator;

  printf("Enter the First number: ");
  scanf("%f", &a);

  printf("Enter the Operator: ");
  scanf(" %c", &operator);

  printf("Enter the Second number: ");
  scanf("%f", &b);


  switch (operator) {
  case '+':
    printf("%.2f + %.2f = %.2f", a, b, (a + b));
    break;
  case '-':
    printf("%.2f - %.2f = %.2f", a, b, (a - b));
    break;
  case '*':
    printf("%.2f * %.2f = %.2f", a, b, (a * b));
    break;
  case '/':
    printf("%.2f / %.2f = %.2f", a, b, (a / b));
    break;
  default:
    printf("Plz Enter +,-,* or / as operatores");
  }
}

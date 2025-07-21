/* Copyright by: Sachin
Date: 16/7/2025 10:46
CP(1): Arithmetic oprerators */
#include <stdio.h>
void main() {
  int a, b;
  printf("Enter the value for a: ");
  scanf("%d", &a);
  printf("Enter the value for b: ");
  scanf("%d", &b);
  printf("\n %d + %d = %d", a, b, (a + b));
  printf("\n %d - %d = %d", a, b, (a - b));
  printf("\n %d * %d = %d", a, b, (a * b));
  printf("\n %d / %d = %f", a, b, (a / b));
  printf("\n %d %% %d = %d", a, b, (a % b));
}

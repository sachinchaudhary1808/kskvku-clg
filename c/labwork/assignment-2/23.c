/*
 * Copyright by: Sachin
 * Date: 2025-08-29 13:02 am
 * PS(23): Write a C program to find the factorial of a number using while.
 */

#include <stdio.h>

void main() {
  int num, temp, result = 1;

  printf("Enter a Number: ");
  scanf("%d", &num);

  temp = num;

  while (temp > 0){
	  result *= temp;
	  temp -= 1;
  }
  printf("%d",result);
}

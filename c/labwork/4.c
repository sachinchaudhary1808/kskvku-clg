/* Copyright by: Sachin
Date: 2025-07-21 6:43 pm
PS(4): Write a C programm that prompts a user to enter a single character and
then print that character and it's ASCII value */

#include <stdio.h>

void main() {
  char a;
  printf("Enter a single character: ");
  scanf("%c", &a);

  printf("You entered %c character and It's ASCII value is %d\n", a, a);
}

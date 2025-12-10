/* Copyright by: Sachin
Date: 21/7/2025 6:28 pm
PS(2): Write a C program that prompts the user to enter an integer, reads the
integer, and then prints the entered integer back to the console with a
descriptive message.*/

#include <stdio.h>

void main() {
  int num;
  printf("Enter an integer number: ");
  scanf("%d", &num);

  printf("You entered: %d", num);
}

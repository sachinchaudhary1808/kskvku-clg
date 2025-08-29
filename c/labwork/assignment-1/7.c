/* Copyright by: Sachin
Date: 2025-07-21 7:15 pm
PS(7): Write a C program that prompts user to enter length and width of a
rectangle ( should be floating point numbers ). The program should then
calculate and print the Area of the rectangle.*/

#include <stdio.h>

void main() {
  float length, width;

  printf("Enter Length of the rectangle: ");
  scanf("%f", &length);

  printf("Enter Width of the rectangle: ");
  scanf("%f", &width);

  printf("The Area of the rectangle is %f\n", (length * width));
}

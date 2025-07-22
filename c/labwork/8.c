/* Copyright by: Sachin
Date: 2025-07-21 8:17 pm
PS(8): Write a C program that prompts user to enter radius of a
circle ( should be floating point numbers ). The program should then
calculate and print the circumference of the circle.*/

#include <stdio.h>

void main() {
  float radius;
  float pi = 3.14159265358979323846;

  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);

  printf("The circumference of the circle is %f\n",   pi * (radius *2));
}

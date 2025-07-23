/* Copyright by: Sachin
Date: 2025-07-23 11:23 am
PS(11): Write a C program to Take a int for the total subject he gave exam for
and then the total marks are there in subjects and then the obtained marks and
then print the subjectvise percentage and the totle percentage  */

#include <stdio.h>

void main() {
  float total_marks, obtained_marks;
  printf("Enter the total marks: ");
  scanf("%f", &total_marks);

  printf("Enter the obtained marks: ");
  scanf("%f", &obtained_marks);

  float percentage = (obtained_marks / total_marks) * 100;
  printf("You got %.2f percentage", percentage);
}

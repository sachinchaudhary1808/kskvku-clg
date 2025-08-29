/*
 * Copyright by: Sachin
 * Date: 2025-08-28 22:06 pm
 * PS(10): Write a C program to input marks of a student and display the grade
 * using if-else ladder.
 */
#include <stdio.h>

void main() {
  float total_marks, total_subject, percentage = 0;

  printf("Enter your total marks: ");
  scanf("%f", &total_marks);

  printf("Enter your total Subject: ");
  scanf("%f", &total_subject);

  percentage = (total_marks / (total_subject * 100)) * 100;
  printf("%f\n",percentage);

  if (percentage >= 90 && percentage <= 100) {
	  printf("A++++cooool");
  } else if (percentage >= 80 && percentage < 90) {
	  printf("A");
  }else if (percentage >= 70 && percentage < 80) {
	  printf("B");
  }else if (percentage >= 60 && percentage < 70) {
	  printf("C");
  }else if (percentage >= 50 && percentage < 60) {
	  printf("D");
  }else if (percentage >= 33 && percentage < 50) {
	  printf("E");
  }else if (percentage >= 0 && percentage < 33) {
	  printf("You failed");
  }else {
	  printf("Plz give valid number");
  }





}

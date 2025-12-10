/*
 * Copyright by: Sachin
 * Date: 2025/8/28 11:02 am
 * PS(8): Write a C program to check whether a character is an alphabet, digit
 * or a special character.
 */

#include <stdio.h>

void main() {
  char ch;

  printf("Enter a character: ");
  scanf("%c", &ch);

  if (ch >= 'a' && ch <= 'z') {
    printf("alphabet");
  } else {
    if (ch >= 'A' && ch <= 'Z') {
      printf("alphabet");
    } else if (ch >= '0' && ch <= '9') {
      printf("digit");
    } else {
      printf("Speical character");
    }
  }
}

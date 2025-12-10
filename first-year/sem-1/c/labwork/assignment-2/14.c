/*
 * Copyright by: Sachin
 * Date: 2025-08-29 01:17 am
 * PS(): Write a C program to check whether a character is a vowel or consonant
 *using switch-case.
 */

#include <stdio.h>

void main() {
  char character;

  printf("Enter a Character to check whether it's a vowel or a consonant: ");
  scanf("%c", &character);

  if (character >= 'A' && character <= 'Z') {
    character += 32;
  }

  switch (character) {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    printf("vowel");
    break;
  default:
    printf("consonant");
  }
}

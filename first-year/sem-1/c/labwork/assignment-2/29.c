/*
 * Copyright by: Sachin
 * Date: 2025-09-01 21:43 am
 * PS(29): Write a C program with a menu to perform operations: factorial,
 * reverse, palindrome, sum of digits.
 */

#include <stdio.h>

void main() {
  int operation;

  printf("Choose an Operation:\n");
  printf("\t1.Fectorial\n");
  printf("\t2.Reverse\n");
  printf("\t3.Palindrome\n");
  printf("\t4.Sum of Digits\n: ");
  scanf("%d", &operation);

  switch (operation) {
  case 1: {
    int num, temp = 1;

    printf("Enter the number: ");
    scanf("%d", &num);

    int i = num;

    while (i >= 1) {
      temp = temp * i;
      i--;
    }

    printf("%d", temp);
  } break;
  case 2: {
    int num, rev = 0, temp = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (num > 0) {
      temp = num;
      temp = temp % 10;
      rev = (rev * 10) + temp;
      num = num / 10;
    }
    printf("%d", rev);
  } break;
  case 3: {
    int num, orinum, rev, temp;

    printf("Enter the number: ");
    scanf("%d", &num);

    orinum = num;

    while (num > 0) {
      temp = num;
      temp = temp % 10;
      rev = (rev * 10) + temp;
      num = num / 10;
    }

    if (orinum == rev) {
      printf("%d is palindrome", orinum);
    } else {
      printf("%d is Not palindrome", orinum);
    }

  } break;
  case 4: {
    int num, count = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (num > 0) {
      num = num / 10;
      count++;
    }
    printf("%d", count);
  } break;
  default:
    printf("Plz Choose a Valid Operation");
  }
}

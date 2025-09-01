/*
 * Copyright by: Sachin
 * Date: 2025-08-30 16:52 pm
 * PS(28): Write a C program to disp]ay all prime numbers between 1 and N Using
 *while.
 */

#include <stdio.h>

void main() {
  int N, num = 3, i = 2, flag = 0;

  printf("Enter how many prime numbers u wanna print: ");
  scanf("%d", &N);

  if (N >= 3){
	  printf("2\n");
  }

  while (num < N) {

    while (i <= num / 2) {
      if (num % i == 0) {
        flag = 1;
        break;
      }
      i++;
    }

    if (flag == 0) {
      printf("%d\n", num);
    }

    flag = 0;
    i = 2;
    num++;
  }
}

/*
 * Copyright by: Sachin
 * Date: 2025-09-01 10:22 am
 * CP(): Nested for loop pattern number 2 | ulta piramid
 */

#include <stdio.h>

void main() {
  int num, k = 0;
  printf("Plz Enter the number of start u wanna print: ");
  scanf("%d", &num);

  for (int i = num; i > 0; i -= 2) {

    for (int i = 0; i < k; i++) {
      printf(" ");
    }
    k++;

    for (int a = 0; a < i; a++) {
      printf("*");
    }
    printf("\n");
  }
}

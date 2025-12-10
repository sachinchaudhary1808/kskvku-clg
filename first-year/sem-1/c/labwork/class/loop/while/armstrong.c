/* Copyright by: sachin
Date: 20/8/2025
CP(): Armstrong */

#include <math.h>
#include <stdio.h>

void main() {
  int a, temp, count, i, ans;
  printf("Enter the value: ");
  scanf("%d", &a);
  temp = a;
  count = 0;
  i = 0;
  ans = 0;

  while (temp > 0) {
    temp = temp / 10;
    count++;
  }
  printf("the processed number is: %d\n", count);

  temp = a;
  while (temp > 0) {
    i = temp % 10;
    temp = temp / 10;
    ans = ans + (pow(i, count));
  }

  printf("the processed number is: %d\n", ans);

  if (ans == a) {
    printf("the number is armstrong");
  } else {

    printf("the number is not armstrong");
  }
}

// generate explanation of the code like debugger  in ruff book

#include <stdio.h>

int main(void) {
  int a = 0;
  printf("Enter a number:\n");
  scanf("%d", &a);
  if (a < 2) {
    printf("The number is not prime");
    return 0;
  }
  for (int i = 2; i < a; i++) {
    if (a % i == 0) {
      printf("The number is not prime\n");
      return 0;
    }
  }
  printf("number is prime\n");
}


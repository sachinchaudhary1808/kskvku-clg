#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  int guess, number;
  srand(time(NULL));
  number = rand() % 100 + 1;

  do {
    printf("Enter the number: ");
    scanf("%d", &guess);
    if (guess > number) {
      printf("Lower plz\n");
    } else if (guess < number) {
      printf("Higer plz\n");
    } else {
      printf("CORRECT");
      return 0;
    }
  } while (guess != number);
}

#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
  if (n < 2) return false;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

int main() {
  int limit;
  printf("Enter the upper limit: ");
  scanf("%d", &limit);

  printf("Prime numbers up to %d:\n", limit);
  for (int i = 2; i <= limit; i++) {
    if (is_prime(i)) {
      printf("%d ", i);
    }
  }
  printf("\n");
  return 0;
}
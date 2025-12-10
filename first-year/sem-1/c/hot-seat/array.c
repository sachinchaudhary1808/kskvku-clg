#include <stdio.h>

int main() {
  int x = 10;
  int *p = &x;
  *p = 50;

  printf("%p\n", &x);
  printf("%d", *p);
  return 0;
}

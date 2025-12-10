#include <stdio.h>

void main() {
  int a;
  printf(
      "Choose an item: \n1.chips\n2.ganthiya\n3.kevdo\n4.chocolates\n5.soda\n");
  printf(" :");
  scanf("%d", &a);

  switch (a) {
  case 1:
    printf("plz pay 20 ruppes\n");
    break;
  case 2:
    printf("plz pay 30 ruppes\n");
    break;
  case 3:
    printf("plz pay 25 ruppes\n");
    break;
  case 4:
    printf("plz pay 50 ruppes\n");
    break;
  case 5:
    printf("plz pay 15 ruppes\n");
    break;
  }
}

/* Copyright by: Sachin
Date:
CP(3): bitwise operator*/

#include <stdio.h>

void main() {
  // BITWISE OPERATORS = special operators used in bit level programming

  // & = AND
  // | = OR
  // ^ = XOR
  // << left shift
  // >> right shift

  int x = 2; // 6 = 00000110
  int y = 4; // 12 = 00001100
  int z = 0; // 24= 00000011

  z = x & y;
  printf("AND = %d\n", z);

  z = x | y;
  printf("OR = %d\n", z);

  z = x ^ y;
  printf("XOR = %d\n", z);

  z = x << 2;
  printf("left shift = %d\n", z);

  z = x >> 1;
  printf("right shift = %d\n", z);

  z = ~x;
  printf("invert = %d\n", z);
}

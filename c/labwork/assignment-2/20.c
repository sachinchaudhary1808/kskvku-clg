/*
 * Copyright by: Sachin
 * Date: 2025-08-29 11:16 am
 * PS(20): Write a C program to find the sum of digits of a number using while.
 */

#include <stdio.h>

void main(){
	int digit,sum_of_digits = 0,temp;

	printf("Enter the number: ");
	scanf("%d",&digit);

	if (digit < 0) digit = -digit;

	while (digit > 0){
		temp = digit % 10;
		sum_of_digits += temp;
		digit = digit / 10;
	}

	printf("%d",sum_of_digits);
}

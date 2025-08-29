/*
 * Copyright by: Sachin
 * Date: 2025-08-29 19:19 pm
 * PS(26): Write a C program to find the GCD of two numbers using while.
 */

#include <stdio.h>

void main() {
	int a, b, gcd = 0, i = 1;

	printf("Enter the First number: ");
	scanf("%d",&a);

	printf("Enter the Second number: ");
	scanf("%d",&b);

	while (i <= a && i <= b){
		if (a % i == 0 && b % i == 0 ){
			gcd = i;
		}
		i++;
	}

	printf("%d",gcd);
}

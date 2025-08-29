/*
 * Copyright by: Sachin
 * Date: 2025-08-29 02:19 am
 * PS(17): Write a C program to find the sum of first N natural numbers using
 * while loop.
 */

#include <stdio.h>

void main(){
	int num, i = 0, sum = 0;

	printf("Enter a Number: ");
	scanf("%d",&num);

	while (i<=num){
		sum += i;
		i++;
	}

	printf("%d",sum);
}

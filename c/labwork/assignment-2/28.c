/*
 * Copyright by: Sachin
 * Date: 2025-08-30 16:52 pm
 * PS(28): Write a C program to disp]ay all prime numbers between 1 and N Using
 *while.
 */

#include <stdio.h>

void main() {
	int N, isprime = 1, i = 2, num = 2;

	printf("Enter the number N: ");
	scanf("%d",&N);

	while (num < N) {
		while(i < num){
			if (num % i == 0){
				isprime = 0;
				break;
			}
			i++;
		}
		if(isprime == 1){
			printf("%d\n",num);
		}
		num++;
		isprime = 1;
		i = 2;
	}
}

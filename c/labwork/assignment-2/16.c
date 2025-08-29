/*
 * Copyright by: Sachin
 * Date: 2025-08-29 02:14 am
 * PS(16): Write a C program to print numbers from 1 to N using while loop.
 */

#include <stdio.h>

void main(){
	int num, i = 1;

	printf("Enter the number: ");
	scanf("%d",&num);

	while (i <= num){
		printf("%d\n",i);
		i++;
	}
}

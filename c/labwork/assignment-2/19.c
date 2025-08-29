/*
 * Copyright by: Sachin
 * Date: 2025-08-29 02:31 am
 * PS(19): Write a C program to find the reverse of a number using while loop.
 */

#include <stdio.h>

void main(){
	int num,temp=0,rev = 0;

	printf("Enter the number: ");
	scanf("%d",&num);

	while (num > 0){
		temp = num % 10;
		rev = (rev * 10) + temp; 
		num = num / 10;
	}

	printf("%d",rev);
}

/*
 * Copyright by: Sachin
 * Date: 2025-08-29 02:25 am
 * PS(18): Write a C program to print the multiplication table of number using
 * while loop; while.
 */

#include <stdio.h>

void main(){
	int num, i = 1;

	printf("Enter the number: ");
	scanf("%d",&num);

	while(i < 11){
		printf("%d x %d = %d\n",num,i,(num*i));
		i++;
	}
}

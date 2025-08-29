/*
 * Copyright by: Sachin
 * Date: 2025-08-29 11:53 am
 * PS(21): Write a C proaram to check whether a number is palindrome or not
 using while.
 */

#include <stdio.h>

void main(){
	int num, temp, rev = 0, original_num;

	printf("Enter a number: ");
	scanf("%d",&num);

	original_num = num;

	while (num > 0){
		temp = num % 10; // 12 / 10 = 2 ; 1 / 10 == 1
		rev = (rev * 10) + temp; //  0 + 2 
		num = num / 10; // 12/ 10 ==  1 // 
	}

	if (original_num == rev){
		printf("palindrome ");
	} else{
		printf("not palindrome ");
	}
}

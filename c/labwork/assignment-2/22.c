/*
 * Copyright by: Sachin
 * Date: 2025-08-29 12:13 pm
 * PS(22): Write a C program to check whether a number is an Armstrong number
 *using while.
 */

#include <stdio.h>
#include <math.h>

void main(){
	int num, count = 0, temp_num, i = 0, power_sum = 0, original_num = 0;

	printf("Enter the number: ");
	scanf("%d",&num);

	temp_num = num;
	original_num = num;

	while (temp_num > 0){
		temp_num /= 10; 
		count++;
	}
	printf("count: %d\n",count);

	while (i <= count){
		temp_num = num % 10;
		power_sum += pow(temp_num,count);
		num = num / 10;
		i++;
	}

	if (original_num == power_sum){
		printf("Number is an Armstrong");
	} else{
		printf("Number is not an Armstrong");
	}
}

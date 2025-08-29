/*
 * Copyright by: Sachin
 * Date: 2025-08-29 01:36 am
 * PS(15): Write a C program to calculate area of Circle, Rectangle, or Triangle
 * using switch.
 */

#include <stdio.h>

void main(){
	int want;
	float num,num1,num2;

	printf("What of Area u wanna calculate \n(1): Circle\n(2): Rectangle\n(3): Triangle\n\t: ");
	scanf("%d",&want);

	if(want == 1){
		printf("Enter the radius of the circle: ");
		scanf("%f",&num);
		printf("The Area of the circle is %f",3.1415 * (num * num));
	}else if (want ==  2){
		printf("Enter the length of Rectangle: ");
		scanf("%f",&num1);
		printf("Enter the width of Rectangle: ");
		scanf("%f",&num2);
		printf("The Area of the Rectangle is: %f",(num1*num2));
	}else if (want == 3){
		printf("Enter the base of the Triangle: ");
		scanf("%f",&num1);
		printf("Enter the height of the Triangle: ");
		scanf("%f",&num2);
		printf("The Area of the Triangle is: %f",0.5 * (num1 * num2));
	}
}

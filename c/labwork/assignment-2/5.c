/*
 * Copyright by: Sachin
 * Date: 2025-08-26 5:32 am
 * PS(5): Write a C program to check whether a entered character is a vowel or a consonant.
 */

#include <stdio.h>

void main() {
	char character;

	printf("Enter a character: ");
	scanf("%c", &character);

	if ( character == 'a' || character == 'A' || character == 'e' || character == 'E' || character == 'i' || character == 'I' || character == 'o' || character == 'O' || character == 'u' || character == 'U') {
		printf("%c is vowel.",character);
	} else {
		printf("%c is consonant.",character);
	}
}

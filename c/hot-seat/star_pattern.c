/*
 * Copyright by: Sachin
 * Date: 2025-09-01 10:22 am
 * CP(): Nested for loop pattern number 2 | ulta piramid
 */

#include <stdio.h>

void main(){
    int num, k = 0;
    printf("Plz enter the number of how many star u want: ");
    scanf("%d",&num);

    for (int i = num; i > 0; i=i-2) {
        // printf("%d\n",i);
        for(int a = 0; a < k; a++){
            printf(" ");
        }
        k++;
        for (int j = 0; j < i; j++){
        printf("*");
        }
        printf("\n");

    }
}

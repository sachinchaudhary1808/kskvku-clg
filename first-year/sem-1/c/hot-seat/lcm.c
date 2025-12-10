/*
 * Copyright by: Sachin
 * Date: 2025-09-02 10:30 am
 * CP(): LCM
 */

#include <stdio.h>

void main() {
    int num, num2, num3, i = 2, factor = 1, flag = 0;

    printf("Enter the 3 numbers to find LCM: ");
    scanf("%d",&num); // 6
    scanf("%d",&num2); // 9
    scanf("%d",&num3); // 10

    while (num > 1 || num2 > 1 || num3 > 1){
        flag = 0;
        if (num % i == 0){
            num = num / i;
            flag = 1;
        }
        if (num2 % i == 0){
            num2 = num2 / i;
            flag = 1;
        }
        if (num3 % i == 0){
            num3 = num3 / i;
            flag = 1;
        }
        if (flag == 1){
            factor = factor * i;
         printf("%d || %d\t %d \t %d\t\n",i,num,num2,num3);
        }
        if (num % i == 0 || num2 % i == 0 || num3 % i == 0){
        } else {
         i++;
        }


    }

    printf("%d\n",factor);
}

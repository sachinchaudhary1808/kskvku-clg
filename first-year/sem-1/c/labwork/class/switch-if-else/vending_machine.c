#include <stdio.h>

void main() {
    int a;
    printf("Choose an item: \n1.chips\n2.ganthiya\n3.kevdo\n4.chocolates\n5.soda\n");
    printf(" :");
    scanf("%d",&a);

    if (a == 1) {
        printf("plz pay 20 ruppes\n");
    } else if (a == 2) {
        printf("Plz pay 30 ruppes\n");
    }else if (a == 3) {
        printf("Plz pay 25 ruppes\n");
    }else if (a == 4) {
        printf("Plz pay 50 ruppes\n");
    }else if (a == 5) {
        printf("Plz pay 15 ruppes\n");
    } else {
        printf("plz choose a valid option!");
    }



}

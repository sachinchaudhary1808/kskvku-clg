#include <stdio.h>

void main() {
    int num,temp,rev,rim;
    printf("Enter the number u wanna reverse: ");
    scanf("%d",&num);
    temp = num;

    while (temp>0) {
        rim = temp % 10;
        temp = temp / 10;
        rev = (rev*10) + rim;
    
    }
    printf("\noriginal number %d",num);
    printf("\nreversed number %d",rev);

}

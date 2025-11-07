#include <stdio.h>

void main(){
     int a[3][3];
     a[0][0] = 15;
     a[0][1] = 2;
     a[0][2] = 32;

     a[1][0] = 7;
     a[1][1] = 42;
     a[1][2] = 41;

     a[2][0] = 29;
     a[2][1] = 22;
     a[2][2] = 23;

     for (int i = 0; i < 3; i++) {
         // printf("%d \n",a[i][0]);
         for(int j = 0; j < 3; j++){
             printf("%d \t",a[i][j]);
         }
         printf("\n");
     }
}

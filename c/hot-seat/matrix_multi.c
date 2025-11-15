#include <stdio.h>
#define MAX 50

void main() {
  int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
  int arows, acolums, brows, bcolums;
  int i, j, k;
  int sum = 0;

  printf("Enter the the rows and coloums of matrix 'a': ");
  scanf("%d %d", &arows, &acolums);

  printf("Enter the elements of  matrix a: ");
  for (i = 0; i < arows; i++) {
    for (j = 0; j < acolums; j++) {
      printf("Enter the %d row's %d colum: ", i, j);
      scanf("%d", &a[i][j]);
    }
  }
  printf("Enter the the rows and coloums of matrix 'b': ");
  scanf("%d %d", &brows, &bcolums);

  if (acolums != brows) {
    printf("sorry we can't calculate this ");
    return;
  } else {
    printf("Enter the elements of  matrix b: ");
    for (i = 0; i < brows; i++) {
      for (j = 0; j < bcolums; j++) {
        printf("Enter the %d row's %d colum: ", i, j);
        scanf("%d", &b[i][j]);
      }
    }
  }
  // result
  for (i = 0; i < arows; i++) {
    for (j = 0; j < bcolums; j++) {
      for (k = 0; k < acolums; k++) {
        sum += a[i][k] * b[k][j];
      }
      product[i][j] = sum;
      sum = 0;
    }
  }
  // printing result
  for (i = 0; i < arows; i++) {
    for (j = 0; j < bcolums; j++) {
      printf("%d\t", product[i][j]);
    }
    printf("\n");
  }
}

#include <stdio.h>
#include <stdlib.h>
int main() {
  int rowSize, columnSize;
  int **table;

  printf("How many rows: ");
  scanf("%d", &rowSize);

  printf("How many columns: ");
  scanf("%d", &columnSize);

  table = (int **) malloc(rowSize * sizeof(int *)); 
  // int ** = table is pointer to arrays of row pointers
  // int *  = space for row pointers

  for (int i=0; i<rowSize; i++) {
    table[i] = (int *) malloc(columnSize * sizeof(int));
  }
  // int *  = row is pointer to arrays of column
  // int    = space for column

  for (int i=0; i<rowSize; i++) {
    for (int j=0; j<columnSize; j++) {
      printf("Enter: ");
      scanf("%d", table[i] + j);
    }
  }

  printf("Even: \n");
  for (int i=0; i<rowSize; i++) {
    for (int j=0; j<columnSize; j++) {
      if (*(table[i] + j)%2==0) {
        printf("Num: %d    Row: [%d]   Col: [%d]\n", *(table[i] + j), i, j);
      }
    }
  }
  printf("\n");

  printf("Odd: \n");
  for (int i=0; i<rowSize; i++) {
    for (int j=0; j<columnSize; j++) {
      if (*(table[i] + j)%2!=0) {
        printf("Num: %d    Row: [%d]   Col: [%d]\n", *(table[i] + j), i, j);
      }
    }
  }

  return 0;
}
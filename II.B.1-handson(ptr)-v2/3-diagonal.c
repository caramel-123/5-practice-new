#include <stdio.h>
#include <stdlib.h>
int main() {
  int rowSize, columnSize;
  int **table;

  printf("How many rows: ");
  scanf("%d", &rowSize);
  printf("How many column: ");
  scanf("%d", &columnSize);

  table = (int **) malloc(rowSize * sizeof(int *));

  for (int i=0; i<rowSize; i++) {
    table[i] = (int *) malloc(columnSize * sizeof(int));
  }

    // 1 2 3 
    // 4 5 6 
    // 7 8 9
  for (int i=0; i<rowSize; i++) {
    for (int j=0; j<columnSize; j++) {
      printf("Enter: ");
      scanf("%d", *(table + i) + j);
    }
  }



  // 1st Diagonal:
  // 1
  //   5
  //     9
  printf("1st Diagonal: ");
  for (int i=0; i<rowSize; i++) {
    for (int j=0; j<columnSize; j++) {
      if (j==i) {
        printf("%d ", *(*(table + i) + j));
      }
    }
  }
  printf("\n");

  // 2nd Diagonal:
  //     3 
  //   5 
  // 7 
  printf("2nd Diagonal: ");
  for (int i=0; i<rowSize; i++) {
    printf("%d ", *(*(table + i) + (2-i)));
  }

  return 0;
}
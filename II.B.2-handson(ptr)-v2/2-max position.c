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
  for (int i=0; i<rowSize; i++) {
    table[i] = (int *) malloc(columnSize * sizeof(int));
  }

  for (int i=0; i<rowSize; i++) {
    for (int j=0; j<columnSize; j++) {
      printf("Enter: ");
      scanf("%d", *(table + i) + j);
    }
  }

  
  int max = *(*(table + 0) + 0);
  int min = *(*(table + 0) + 0);

  for (int i=0; i<rowSize; i++) {
    for (int j=0; j<columnSize; j++) {
      if (*(*(table + i) + j) > max) {
        max = *(*(table + i) + j);
      }
      if (*(*(table + i) + j) < min) {
        min = *(*(table + i) + j);
      }
    }
  }

  printf("Max: %d\n", max);
  printf("Min: %d", min);


  return 0;
}
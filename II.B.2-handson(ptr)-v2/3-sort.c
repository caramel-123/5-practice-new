#include <stdio.h>
#include <stdlib.h>
void ascending(int *table, int tableSize) {
  int temp;
  for (int i=0; i<(tableSize-1); i++) {
    for (int j=(i+1); j<tableSize; j++) {
      if (*(table + i) > *(table + j)) {
        temp = *(table + i);
        *(table + i) = *(table + j);
        *(table + j) = temp;
      }
    }
  }
}

void descending(int *table, int tableSize) {
  int temp;
  for (int i=0; i<(tableSize-1); i++) {
    for (int j=(i+1); j<tableSize; j++) {
      if (*(table + i) < *(table + j)) {
        temp = *(table + j);
        *(table + j) = *(table + i);
        *(table + i) = temp;
      }
    }
  }
}

void to2d(int *table, int rowSize, int columnSize) {
  int table2d[rowSize][columnSize];

  int k=0;
  for (int i=0; i<rowSize; i++) {
    for (int j=0; j<columnSize; j++) {
      *(*(table2d + i) + j) = *(table + k++);
    }
  }

  for (int i=0; i<rowSize; i++) {
    for (int j=0; j<columnSize; j++) {
      printf("%d ", *(*(table2d + i) + j));
    }
    printf("\n");
  }
}


int main() {
  int rowSize, columnSize;

  printf("How many rows: ");
  scanf("%d", &rowSize);
  printf("How many columns: ");
  scanf("%d", &columnSize);

  int *table;
  int tableSize = rowSize * columnSize;

  table = (int *) malloc(tableSize * sizeof(int));

  for (int i=0; i<tableSize; i++) {
    printf("Enter num: ");
    scanf("%d", (table + i));
  }

  ascending(table, tableSize);
  printf("\nAscending: \n");
  to2d(table, rowSize, columnSize);
  
  descending(table, tableSize);
  printf("\nAscending: \n");
  to2d(table, rowSize, columnSize);
  return 0;
}

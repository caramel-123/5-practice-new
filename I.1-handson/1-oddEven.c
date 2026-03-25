#include <stdio.h>

void searchEven() {
  int list[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  // 1 2 3 
  // 4 5 6
  // 7 8 9

  printf("\nEven numbers: \n");
  for (int i=0; i<3; i++) { // Rows
    for (int j=0; j<3; j++) { // Columns
      if (list[i][j]%2==0) {
        printf("Number: %d   ", list[i][j]);
        printf("Row: [%d]  ", i);
        printf("Column: [%d]", j);
        printf("\n");
      }
    }
  }
}


int main() {
  searchEven();

  return 0;
}
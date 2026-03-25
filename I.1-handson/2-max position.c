#include <stdio.h>

int main() {
  int table[3][3] = {1,2,3,4,5,6,7,8,9};

  int max = table[0][0];
  int min = table[0][0];
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      if (max < table[i][j]) {
        max = table[i][j];
      }
      if (min > table[i][j]){
        min = table[i][j];
      }
    }
  }

  printf("Max: %d\n", max);
  printf("Min: %d\n", min);
  return 0;
}
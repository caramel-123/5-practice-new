#include <stdio.h>

int main() {
  int table[3][3] = {1,2,3,4,5,6,7,8,9};
  // 1 2 3 
  // 4 5 6
  // 7 8 9

  // 00 01 02
  // 10 11 12
  // 20 21 22

  printf("Right-Left diagonal: ");
  for (int i=0; i<3; i++) {
    for (int j=i; j==i; j++) {
      printf("%d ", table[i][j]);
    }
  }
  printf("\n");

  printf("Left-Right diagonal: ");
  for(int i=0; i<3; i++){
      printf("%d ", table[i][2-i]);
  }
  printf("\n");
}
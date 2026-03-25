#include <stdio.h>

int main() {
  int arr[3][3] = {1,2,3,4,5,6,7,8,9};

  int guessNum;
  printf("Enter guess: ");
  scanf("%d", &guessNum);

  int found = 0;
  for (int i=0; i<3; i++) {
    if ((guessNum == arr[i][i]) || (guessNum == arr[i][2-i])) {
      printf("Num: %d   Row: %d   Column: %d\n", arr[i][i], i, i);
      found = 1;
    } 
  }

  if (!found) {
    printf("Element not found on the diagonal.\n");
  }
  return 0;
}
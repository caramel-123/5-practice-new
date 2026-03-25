// 1. Normal Structure
#include <stdio.h>

struct Student {
  int id;
  char name[80];
  int score;
};
int main() {
  struct Student students[3];

  for (int i=0; i<3; i++) {
    printf("Enter id: ");
    scanf("%d", &students[i].id);
    printf("Enter name: ");
    scanf("%s", &students[i].name);
    printf("Enter score: ");
    scanf("%d", &students[i].score);
  }

  for (int i=0; i<3; i++) {
    printf("\nId: %d\n", students[i].id);
    printf("Name: %s\n", students[i].name);
    printf("Score: %d\n\n", students[i].score);

  }


  return 0;
}
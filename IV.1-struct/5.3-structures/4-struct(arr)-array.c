#include <stdio.h>
#include <stdlib.h>

struct Student {
  char name[80];
  int score;
};
int main() {

  int studentQty;

  printf("How many students: ");
  scanf("%d", &studentQty);

  struct Student *student;

  student = (struct Student *) malloc(studentQty * sizeof(struct Student));

  for (int i=0; i<studentQty; i++) {
    printf("Enter Name: ");
    scanf("%s", &student[i].name);
    printf("Enter name: ");
    scanf("%d", &student[i].score);
  }

  for (int i=0; i<studentQty; i++) {
    printf("Name: %s\n", student[i].name);
    printf("Score: %d\n", student[i].score);
  }

  
}
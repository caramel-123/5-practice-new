#include <stdio.h>

struct Student {
  char name[80];
  int score;
};

void display(struct Student student1) {
  printf("Name: %s\n", student1.name);
  printf("Score: %d\n", student1.score);
}
int main() {
  struct Student student1 = {"Melfred", 10};

  display(student1);
  return 0;
}
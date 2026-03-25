#include <stdio.h>

struct Student {
  char name[80];
  int score;
};

void display(char name[], int score) {
  printf("Name: %s\n", name);
  printf("Score: %d\n", score);
}
int main() {
  struct Student student1 = {"Melfred", 10};

  display(student1.name, student1.score);

  return 0;
}
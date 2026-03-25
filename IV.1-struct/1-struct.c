#include <stdio.h>

struct Student {
  int id;
  char name[80];
  int score;
};
int main() {
  struct Student student1 = {109342, "George", 10};
  struct Student student2 = {109343, "Mich", 8};

  printf("\nId: %d\n", student1.id);
  printf("Name: %s\n", student1.name);
  printf("Score: %d\n\n", student1.score);

  printf("Id: %d\n", student2.id);
  printf("Name: %s\n", student2.name);
  printf("Score: %d\n\n", student2.score);
  return 0;
}

  
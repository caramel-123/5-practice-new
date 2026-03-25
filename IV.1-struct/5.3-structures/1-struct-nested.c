#include <stdio.h>

struct BirthDate {
  char month[80];
  int day;
  int year;
};

struct Student {
  int id;
  char name[80];
  struct BirthDate date;
};



int main() {
  struct Student student1 = {109342, "Mel", {"July", 20, 2007}};

  printf("Id: %d\n", student1.id);
  printf("Name: %s\n", student1.name);
  printf("Birthday: %s %d, %d", student1.date.month, student1.date.day, student1.date.year);
}
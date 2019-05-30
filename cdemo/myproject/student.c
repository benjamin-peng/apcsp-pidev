#include "student.h"

void printStudent(struct Student* student) {
  printf("enter first and last name: %s %s\n", student->first, student->last);
  printf("age: %d\n", student->age);
  printf("ID: %d\n", student->ID);
}

struct Student {
  char first[256];
  char last[256];
  int age;
  int ID;
};

void printStudent(struct Student* student) {
  printf("enter first and last name: %s %s\n", student->first, student->last);
  printf("age: %d\n", student->age);
  printf("ID: %d\n", student->ID);
}

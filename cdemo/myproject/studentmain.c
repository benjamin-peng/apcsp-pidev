#include <stdio.h>
#include "student.h"

int main() {
  char input[256];
  struct Student students[256];
  char ans;
  int answer = 0;
  int count = 0;

  while (0 == 0) {
    printf("y to enter a student, anything else to view previous entries\n");
    fgets(input, 256,stdin);
    sscanf(input, "%s", &ans);
    if (strcmp(&ans, "y") == 1) {
    	char first[256];
    	char last[256];
    	int age;
    	int ID;
      
    	printf("first:\n");
    	fgets(input, 256, stdin);
    	sscanf(input, "%s", first);
    	printf("last:\n");
    	fgets(input, 256, stdin);
    	sscanf(input, "%s", last);
    	printf("age:\n");
    	fgets(input, 256, stdin);
    	sscanf(input, "%s", age);
    	printf("ID:\n");
    	fgets(input, 256, stdin);
    	sscanf(input, "%s", ID);
    	strcpy(students[count].first, first);
    	strcpy(students[count].last, last);
    	students[count].age = age;
    	students[count].ID = ID;
    	count++;
    }
    
    else {
    	int view;
    	printf("Which student to view(number)?\n");
      scanf("%d", &view);
    	printStudent(&students[view]);
    }
    
  }
}

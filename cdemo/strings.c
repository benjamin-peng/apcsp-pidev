#include <stdio.h>
#include <string.h>

int main() {
  char alphOne[25];
  char alphTwo[] = "abcdefghijklmnopqrstuvwxyz";
  
  for (int i = 0; i < 26; i++) {
    alphOne[i] = i + 97;
  }
  
  if (strcmp(alphOne, alphTwo) == 0) printf("strings equal\n");
  
  for (int i = 0; i < 26; i++) {
    alphTwo[i] = alphTwo[i] - 36;
  }
  
  if (strcmp(alphOne, alphTwo) != 0) printf("strings not equal\n");
  char alphComb[52];
  strcpy(alphComb, alphOne);
  strcat(alphComb, alphTwo);
  
  printf("string one: %s\nstring two: %s\nstring three: %s\n", alphOne, alphTwo, alphComb);
}

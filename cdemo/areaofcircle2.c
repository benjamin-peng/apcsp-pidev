#include <stdio.h>

int main() {
  float start = 0;
  float end = 0;
  
  printf("enter start and end bounds\n");
  scanf("%f", &start);
  scanf("%f", &end);
  
  if (start != -0) {
      for (float i = start; i <= end; i++) {
        float area = i * i * 3.14;
        printf("radius %f has an area of %f\n", i, area);
      }
  }
  else {
      printf("not a float");
  }
  return 0;
}

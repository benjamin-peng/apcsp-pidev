#include <stdio.h>

float areaOfCircle(float radius) {
  float area = (3.1416 * radius * radius);
  return area;
}

int main(int argc, char* argv[]) {
  int arg = 0;
  while (arg < argc) {
    printf("Bound %d is %s\n", arg, argv[arg]);
    arg++;
  }
  float lower, upper;
  if (argc == 3) {
    sscanf(argv[1], "%f", &lower);
    sscanf(argv[2], "%f", &upper);
  }
  else {
    printf("lower bound:\n");
    scanf("%f", &lower);
    printf("upper bound:\n");
    scanf("%f", &upper);
  }
  for (float radius = lower; radius <= upper; radius++) {
	float result = areaOfCircle(radius);
	printf("area: %f: %f\n", radius, result);
    }
}

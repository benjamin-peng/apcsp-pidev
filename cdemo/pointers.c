#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float c = 1;
  float d = 2;
  printf("Float c: %fl, float d: %fl\npointer c: %d pointer d: %d\n", c, d, &c, &d);

  float temp = c;
  *&c = *&d;
  *&d = temp;
  printf("c and d switched, new c: %fl new d: %fl\n", c, d);
}

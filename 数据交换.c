#include <stdio.h>

int main()
{

  int a = 12;
  int b = 6;
  int c;
  c = a;
  a = b;
  b = c;
  printf("a=%d,b=%d",a,b);
  return 0;
}

#include <stdio.h>
#include <math.h>
int main(){
  float x,y,z,A,B,C,D,d;
  scanf("%f %f %f",&x,&y,&z);
  scanf("%f %f %f %f",&A,&B,&C,&D);
  d = fabs(A*x+B*y+C*z+D)/sqrt(A*A+B*B+C*C);
  printf("%.3f",d);
  return 0;
}

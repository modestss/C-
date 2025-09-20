#include <stdio.h>
#include <math.h>
int main(){
  float x,y,z,A,B,C,D,d;
  scanf("%f %f %f",&x,&y,&z);
  scanf("%f %f %f %f",&A,&B,&C,&D);
  d = fabs(A*x+B*y+C*z+D)/sqrt(A*A+B*B+C*C);//fabs()用于取绝对值，sqrt()用于开方求平方根
  printf("%.3f",d);//%.3f作用是结果保留小数点后三位
  return 0;
}

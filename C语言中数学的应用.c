#include <stdio.h>
#include <math.h>
//计算数学公式  y=sin(x)/a*x + 丨cos(pi/2*x)丨,要求输入a和x的值，输出y并保留三位小数
//测试数据：1，3.1 40 -->1.006
//<math.h>的应用，sin（），cos（），fabs（）-->绝对值
int main(){
  float a,x,y,t1,t2;
  printf("依次输入a和x：");
  scanf("%f %f",&a,&x);//%f是读取浮点数是用，%d是读取整数是用
  t1 = sin(x)/a*x
  t2 = fabs(cos(3.1415926/2*x));
  y = t1+t2;
  printf("%.3f",y);//%.3f作用是结果保留三位小数
  return 0;
}

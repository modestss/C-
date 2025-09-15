#include <stdio.h>
///计算两个正整数的加减乘除
///"&"作用是读取用户输入的数据然后将该数据赋值给变量
///"\n"作用是换行
int main(){
  int a,b;
  printf("请输入两个数：");
  scanf(%d %d,&a,&b);
  printf("%d + %d = %d\n",a,b,a+b);
  printf("%d - %d = %d\n",a,b,a-b);
  printf("%d * %d = %d\n",a,b,a*b);
  printf("%d / %d = %d\n",a,b,a/b);
  return 0;
}

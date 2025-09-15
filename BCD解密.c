#include <stdio.h>
///%d是以十进制输出
///%x是以十六进制输出
///十进制转换十六进制原理
///18/16 -->1
///18%16 -->2
///1*10 + 2 = 12

int main(){
  int a;
  scanf("%d",&a);
  printf("%x",a)
  return 0;
}

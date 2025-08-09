#include <stdio.h>
//逆序三位数
int main()
{
  int sws,baiw,shiw,gew,jieg;
  printf("请输入一个三位数：");
  scanf("%d",&sws);
  baiw = sws/100;
  shiw = sws/10%10;
  gew = sws%10;
  jieg = gew*100 + shiw*10 +baiw;
  printf("%d",jieg)
 return 0;
}

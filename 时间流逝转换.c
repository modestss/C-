#include <stdio.h>
//时间流逝转换
int main()
{
  int swsj,minute;
  printf("请输入一个四位数据：");
  scanf("%d",&swsj);

  printf("请输流逝分钟：");
  scanf("%d",&minute);

  int hour1 = swsj/100;
  int minute1 = swsj%100;
  int minute2 = hour1*60 + minute1 + minute;
  int hour = minute2/60;
  int Minute = minute2%60;
  int jieguo = hour*100 + Minute;
  printf("%d",jieguo);
  
  return 0;
}

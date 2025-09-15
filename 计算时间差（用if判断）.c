#include <stdio.h>
///if判断
int main(){
  int hour1,minute1;
  int hour2,minute2;
  scanf("%d %d",&hour1,&minute1);
  scanf("%d %d",&hour2,&minute2);

  int h = hour2 - hour1;
  int m = minute2 - minute1;
  if (m<0){
    m = 60 + m;
    h --;
  }
  return 0;
}

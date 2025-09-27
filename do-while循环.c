#include <stdio.h>
// do-while循环的定义：在进入循环的时候不做检查，而是在执行完一轮循环体的代码后，再来检查循环的条件是否满足，如果满足就进入下一轮循环，不满足则结束循环
int main()
{
    int x;
    int n = 0;
    scanf("%d", &x);
    do
    {
        x /= 10;
        n++;
    } while (x > 0); // 注意这里要有分号结束循环条件判断
    printf("%d", n);
    return 0;
}
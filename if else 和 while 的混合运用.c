#include <stdio.h>
// 计算一个整数的位数
// if else 和 while 的混合运用
int main()
{
    int x;
    int n = 0;
    scanf("%d", &x);
    if (x > 0)
    {
        while (x > 0)
        {
            n = n + 1;
            x /= 10;
            printf("x=%d n=%d\n", x, n); // 展示每次循环的结果
        }
    }
    else if (x < 0)
    {
        x = -x;       // 这里先将x转换为正值
        while (x > 0) // 这里x已经转为正值，需要套用x>0时的循环逻辑
        {
            n++;
            x /= 10;
            printf("x=%d n=%d\n", x, n);
        }
    }
    else
    {
        n = 1;
    }
    printf("%d", n);
    return 0;
}
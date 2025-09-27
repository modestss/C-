#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int digit;
    int ret = 0;

    while (x > 0)
    {
        digit = x % 10;
        // printf("%d", digit);
        ret = ret * 10 + digit;
        //   printf("x=%d,digit=%d,ret=%d\n", x, digit, ret);//调试用
        x /= 10;
    }
    printf("%d", ret);
    return 0;
}
// 这个问题有两种解决方法其一是上述方法，思路清奇，其二如下：
/*while (x>0){
    digit = x % 10;
    printf("%d",digit);
    x /= 10;
}
这种方法语句简单
两者区别是第一种是将用户输入的数的各位数进行了逆序，最终输出的是一个数；第二种是通过循环将用户输入的数经多次取模将数的各位数颠倒，输出的是一个排列
*/
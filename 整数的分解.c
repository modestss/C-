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
        //   printf("x=%d,digit=%d,ret=%d\n", x, digit, ret);//������
        x /= 10;
    }
    printf("%d", ret);
    return 0;
}
// ������������ֽ��������һ������������˼·���棬������£�
/*while (x>0){
    digit = x % 10;
    printf("%d",digit);
    x /= 10;
}
���ַ�������
���������ǵ�һ���ǽ��û���������ĸ�λ�����������������������һ�������ڶ�����ͨ��ѭ�����û�������������ȡģ�����ĸ�λ���ߵ����������һ������
*/
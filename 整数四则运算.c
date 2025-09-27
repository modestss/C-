#include <stdio.h>
/// 计算两个正整数的和，差，积并输出，并且全为整型
///&作用是读取到输入的数据并将这个数据赋值给变量
///"\n"作用是换行
int main()
{
	int a, b;
	printf("请输入两个数：");
	scanf("%d %d", &a, &b);
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);

	return 0;
}

#include <stdio.h>
//double浮点数的用法 
int main(){
	printf("请分别输入身高的英尺和英寸，""如输入\"5 7\"表示5英寸7英尺:");
	
	double foot;
	double inch;
	scanf("%lf %lf",&foot,&inch);//%lf用于double类型的读取 
	printf("身高是%f米\n",((foot + inch /12) * 0.3048));
	return 0;//%f是将后面的浮点数输出在这里 
} 

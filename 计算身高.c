#include <stdio.h>
//double���������÷� 
int main(){
	printf("��ֱ�������ߵ�Ӣ�ߺ�Ӣ�磬""������\"5 7\"��ʾ5Ӣ��7Ӣ��:");
	
	double foot;
	double inch;
	scanf("%lf %lf",&foot,&inch);//%lf����double���͵Ķ�ȡ 
	printf("�����%f��\n",((foot + inch /12) * 0.3048));
	return 0;//%f�ǽ�����ĸ�������������� 
} 

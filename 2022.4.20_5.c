#define _CRT_SECURE_NO_WARNINGS 1
//5.�ж��Ƿ��ǻ�����
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	int z = 0;
	scanf("%d", &n);   //��������n
	z = n;             //����ֵn����z����ֹn�ں��������б仯������ʧn��ֵ
	while (n)          //��nΪ0ʱ����ѭ��������ѭ��������ÿ�μ���n��ֵ������з����ж�
	{
		m = m * 10 + n % 10;     //����n�ķ�����
		n /= 10;                 //�����һλ��ȥ�����ٽ�������ֵ����n
	}
	if (m == z)                  //����ж��������ֵn����z(������)��m�������У��Ƿ����
		printf("�����ǻ�����:%d",z);
	else
		printf("�������ǻ�����:%d",z);
	return 0;
}
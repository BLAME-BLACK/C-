#define _CRT_SECURE_NO_WARNINGS 1
//2.����ÿλ���ĺ�
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	float sum = 0;
	float x = 1;               //x,y,z����float���͵���������ʹ�����С�����㣬����Ҳ��
	float y = 2;
	float z = 0;
	float m = 0;
	scanf("%d", &n);            //������������
	for (i = 1;i <= n;i++)      //�ӵ�һ���n���ѭ��
	{
		z = x / y;              //����ÿһ���ֵ
		sum = sum + z;          //��ÿһ���ֵ������
		m = y;                  //����ĸ��ֵ�����������Է���ʧ
		y = x + y;              //�����µķ�ĸ
		x = m;                  //�����µķ���
	}
	printf("%f", sum);
	return 0; 
}
#define _CRT_SECURE_NO_WARNINGS 1
//7.���㵽7�ļ���֮һ�ĺ�
#include<stdio.h>
int main()
{
	float n = 0;                   //��������n������ÿһ��
	float k = 1;                   //��������k������ĸ
	int i = 0;                     //��������i�����Ƶ�һ��ѭ��
	float j = 0;                   //��������j�����Ƶڶ���ѭ��
	float s = 0;                   //�����������������ļ�����
	for (i = 1;i <= 7;i++)         //��Ӧ��Ŀ������n=7����ѭ��7��
	{
		for (j =1;j<=i;j++ )       //��ѭ��������ÿһ��Ľ׳ˣ����У���i������j��ѭ������
		{
			k = k * j;             //k������һ�ε�k����j
		}
		n = 1.0 / k;               //����ÿһ��Ľ�����浽n��
		s = s + n;                 //�õ�һ��ѭ�������ƽ�ÿһ���ֵ�浽s��
	}
	printf("%0.9f", s);            //0.9��ʾ��ӡС�����9λ��f��ʾ��ֵ��С������ʽ���﷨�涨��
	return 0;                      //�������ʾ���������������getchar����
}
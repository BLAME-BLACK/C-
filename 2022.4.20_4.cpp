#define _CRT_SECURE_NO_WARNINGS 1
//4.��ÿλ��������
#include<stdio.h>
int main()
{
	int sum = 0;
	int n = 0;
	int x = 1;
	scanf("%d", &n);   //����n��ֵ
	do                 //�ȼ���һ��
	{
		x = n % 10;    //�����λ����x
		sum = sum + x;  //���������ۼ�����
		n = n / 10;     //ȥ��ĩλ�������¸�ֵ��n
	} while (n!=0);     //��ʱ�ж��Ƿ�n��ֵΪ0�������ж�n�Ƿ���㵽���λ��
	printf("%d", sum);
	return 0;
}
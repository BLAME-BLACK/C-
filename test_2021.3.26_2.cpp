#define _CRT_SECURE_NO_WARNINGS 1
//2.������λ��������λ���ߵ�
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
	int a, s, d, f, g, h, j, k, l;
	printf("��������λ����;\n");
	scanf("%d", &a);
	s = a / 1000;
	d = a % 1000;
	f = d / 100;
	g = d % 100;
	h = g / 10;
	j = g % 10;
	k = j / 1;
	printf("�ߵ��������Ϊ;%d%d%d%d", k, h, f, s);
	return 0;
}

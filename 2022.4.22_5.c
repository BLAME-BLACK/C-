#define _CRT_SECURE_NO_WARNINGS 1
//5.����ɼ��ж�
#include<stdio.h>
#include<assert.h>                  //Ϊ��ʹ�ö��Թ��ܣ���ͷ�ļ����������ǣ�����������ʱ�������κ��£�������ʱ��ֱ�ӱ�����������
int main()
{
	int grade = 0;                  //��������grade
	printf("������ѧ���ĳɼ�\n");     //��ʾ�û�����ɼ� 
	scanf("%d", &grade);            //����ɼ���grade
	assert(0 <= grade <= 100);      //��������ɼ��Ƿ�Ϸ�������if���棩
	grade /= 10;                    //���ɼ�����10���ٽ��������grade���������switchѡ��
	switch (grade)                  //����grade��ֵѡ�����
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("E");                //��ѧ���ɼ�С��60ʱ������ݼ������������0��5��Ȼ���ӡE
		break;                      //����ѡ����ȥ��������������
	case 6:
		printf("D");
		break;
	case 7:
		printf("C");
		break;
	case 8:
		printf("B");
		break;
	case 9:
	case 10:
		printf("A");
		break;
	}
	return 0;                       //�������ʾ���������������getchar����
}
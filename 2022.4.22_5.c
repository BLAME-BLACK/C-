#define _CRT_SECURE_NO_WARNINGS 1
//5.输入成绩判定
#include<stdio.h>
#include<assert.h>                  //为了使用断言功能，引头文件，其作用是，当符合条件时不发生任何事，不符合时会直接报出错误所在
int main()
{
	int grade = 0;                  //创建变量grade
	printf("请输入学生的成绩\n");     //提示用户输入成绩 
	scanf("%d", &grade);            //储存成绩到grade
	assert(0 <= grade <= 100);      //断言输入成绩是否合法（可用if代替）
	grade /= 10;                    //将成绩除以10后再将结果赋给grade，方便后面switch选择
	switch (grade)                  //根据grade的值选择进入
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("E");                //当学生成绩小于60时，会根据计算结果进入情款0到5，然后打印E
		break;                      //跳出选择下去，下面的语句类似
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
	return 0;                       //如果想显示结果，请输入两个getchar（）
}
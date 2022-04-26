#define _CRT_SECURE_NO_WARNINGS 1
//3.ÅÐ¶Ï×Ö·û
#include<stdio.h>
int main()
{
	char x = 0;
	printf("ÇëÊäÈëÒ»¸ö×Ö·û\n");
	scanf("%c", &x);
	if (x >= 48 && x <= 57)
	{
		printf("¸Ã×Ö·ûÊÇÊý×Ö×Ö·û");
	}
	else if (x >= 65 && x < 90)
	{
		printf("¸Ã×Ö·ûÊÇ´óÐ´×ÖÄ¸×Ö·û");
	}
	else if (x >= 97 && x <= 122)
	{
		printf("¸Ã×Ö·ûÊÇÐ¡Ð´×ÖÄ¸×Ö·û");
	}
	else
	{
		printf("¸Ã×Ö·ûÊÇÆäËû×Ö·û");
	}
	return 0;
}
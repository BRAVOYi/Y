#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int day = 1;
	scanf("%d ", &day);
	if (day <= 5 || day >= 1)
		printf("������\n");
	else
		printf("��ĩ\n");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int day = 1;
	scanf("%d ", &day);
	if (day <= 5 || day >= 1)
		printf("工作日\n");
	else
		printf("周末\n");
	return 0;
}
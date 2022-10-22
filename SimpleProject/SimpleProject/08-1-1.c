#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_08_1_1(void)
{
	int num;
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i % 7 == 0 || i % 9 == 0)
		{
			printf("%d \n", i);
		}
	}
	return 0;
}
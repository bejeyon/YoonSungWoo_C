#include <stdio.h>

//int main(void)
//{
//	int total = 0, num = 0;
//
//	do
//	{
//		do
//		{
//			total += num;
//		} while (num % 2 = 1);
//		num++;
//	} while (num <= 100);
//	printf("0이상 100이하의 정수 중에서 짝수의 합: %d", total);
//	return 0;
//}

int main_07_3_2_1(void)
{
	int total = 0, num = -1;

	do
	{
		num++;
		while (num % 2 == 0)
		{
			total += num;
			num++;
		}
	} while (num < 100);

	printf("0이상 100이하의 정수 중에서 짝수의 합: %d", total);

	return 0;
}

int main_07_3_2_2(void)
{
	int total = 0, num = -1;

	do
	{
		do
		{
			num++;
		} while (num % 2 != 0);
		total += num;
	} while (num < 100);

	printf("0이상 100이하의 정수 중에서 짝수의 합: %d", total);

	return 0;
}

int main_07_3_2_3(void)
{
	int total = 0, num = 0;

	do
	{
		num++, num++;
		total += num;
	} while (num < 100);

	printf("0이상 100이하의 정수 중에서 짝수의 합: %d", total);

	return 0;
}
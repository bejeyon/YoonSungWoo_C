//#include <stdio.h>
//
//int main(void)
//{
//	int cur = 2;
//	int is = 0;
//
//	while (cur < 10)	// 2단부터 9단까지 반복
//	{
//		is = 1;	// 새로운 단의 시작을 위해서
//		while (is < 10)	// 각 단의 1부터 9의 곱을 표현
//		{
//			printf("%dx%d=%d \n", cur, is, cur * is);
//			is++;
//		}
//		cur++;	// 다음 단으로 넘어가기 위한 증가
//	}
//	return 0;
//}

#include <stdio.h>

int main_07_3_3(void)
{
	int cur = 2;
	int is = 0;

	do
	{
		is = 1;
		do
		{
			printf("%dx%d=%d \n", cur, is, cur * is);
			is++;
		} while (is<10);
		cur++;
	} while (cur<10);

	//while (cur < 10)	// 2단부터 9단까지 반복
	//{
	//	is = 1;	// 새로운 단의 시작을 위해서
	//	while (is < 10)	// 각 단의 1부터 9의 곱을 표현
	//	{
	//		printf("%dx%d=%d \n", cur, is, cur * is);
	//		is++;
	//	}
	//	cur++;	// 다음 단으로 넘어가기 위한 증가
	//}
	//return 0;
}
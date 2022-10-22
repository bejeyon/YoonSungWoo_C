//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void OddInTen(int* arrO, int lenO)
//{
//	int o = 0;
//	printf("홀수 출력: ");
//	for (o = 0; o < lenO; o++)
//	{
//		if (arrO[o] % 2 == 0)
//			continue;
//		printf("%d, ", arrO[o]);
//	}
//}
//
//void EvenInTen(int* arrE, int lenE)
//{
//	int e = 0;
//	printf("짝수 출력: ");
//	for (e = 0; e < lenE; e++)
//	{
//		if (arrE[e] % 2 != 0)
//			continue;
//		printf("%d, ", arrE[e]);
//	}
//}
//
//int main(void)
//{
//	int ten[10];
//	int i=0;
//	printf("10개의 정수 입력: ");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &ten[i]);
//	}
//	OddInTen(ten, 10);
//	EvenInTen(ten, 10);
//	return 0;
//}
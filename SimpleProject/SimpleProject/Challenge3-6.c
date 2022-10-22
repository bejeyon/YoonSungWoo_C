//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void)
//{
//	int num1, num2,num3,n1,n2,n3,strike=0,ball=0, trial=0;
//	srand((int)time(NULL));	// 현재시간을 이용해서 씨드 설정
//	printf("Start Game! \n");
//	n1 = rand() % 10;
//	n2 = rand() % 10;
//	n3 = rand() % 10;
//
//	while (1)
//	{
//		printf("3개의 숫자 선택(0~9): ");
//		scanf("%d %d %d", &num1, &num2, &num3);
//		strike = 0, ball = 0;
//		
//		if (num1==n1&&num2==n2&&num3==n3)
//		{
//			trial++;
//			printf("%d번째 도전 결과: 3strike, 0dball \n", trial);
//			break;
//		}
//		if (num1 == n1)
//		{
//			strike++;
//		}
//		if (num2 == n2)
//		{
//			strike++;
//		}
//		if (num3 == n3)
//		{
//			strike++;
//		}
//		if (num1 == n2)
//		{
//			ball++;
//		}
//		if (num1 == n3)
//		{
//			ball++;
//		}
//		if (num2 == n1)
//		{
//			ball++;
//		}
//		if (num2 == n3)
//		{
//			ball++;
//		}
//		if (num3 == n1)
//		{
//			ball++;
//		}
//		if (num3 == n2)
//		{
//			ball++;
//		}
//
//		trial++;
//		printf("%d번째 도전 결과: %dstrike, %ddball \n", trial, strike, ball);
//	}
//
//	printf("Game Over! \n");
//	return 0;
//}
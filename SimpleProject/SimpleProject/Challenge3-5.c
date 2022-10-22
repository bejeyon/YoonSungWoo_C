//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void)
//{
//	int rsp1, rsp2,win=0,tie=0;
//	srand((int)time(NULL));	// 현재시간을 이용해서 씨드 설정
//
//	while (1)
//	{
//		rsp2 = rand() % 3 + 1;
//		printf("바위는 1, 가위는 2, 보는 3: ");
//		scanf("%d", &rsp1);
//		if (rsp1 == 1 && rsp2 == 2)
//		{
//			win++;
//			printf("당신은 바위 선택, 컴퓨터는 가위 선택, 이겼습니다! \n");
//		}
//		else if (rsp1 == 2 && rsp2 == 3)
//		{
//			win++;
//			printf("당신은 가위 선택, 컴퓨터는 보 선택, 이겼습니다! \n");
//		}
//		else if (rsp1 == 3 && rsp2 == 1)
//		{
//			win++;
//			printf("당신은 보 선택, 컴퓨터는 바위 선택, 이겼습니다! \n");
//		}
//		else if (rsp1 == 1 && rsp2 == 1)
//		{
//			tie++;
//			printf("당신은 바위 선택, 컴퓨터는 바위 선택, 비겼습니다! \n");
//		}
//		else if (rsp1 == 2 && rsp2 == 2)
//		{
//			tie++;
//			printf("당신은 가위 선택, 컴퓨터는 가위 선택, 비겼습니다! \n");
//		}
//		else if (rsp1 == 3 && rsp2 == 3)
//		{
//			tie++;
//			printf("당신은 보 선택, 컴퓨터는 보 선택, 비겼습니다! \n");
//		}
//		else if (rsp1 == 1 && rsp2 == 3)
//		{
//			printf("당신은 바위 선택, 컴퓨터는 보 선택, 당신이 졌습니다! \n");
//			printf("게임의 결과: %d승, %d무 \n", win, tie);
//			break;
//		}
//		else if (rsp1 == 2 && rsp2 == 1)
//		{
//			printf("당신은 가위 선택, 컴퓨터는 바위 선택, 당신이 졌습니다! \n");
//			printf("게임의 결과: %d승, %d무 \n", win, tie);
//			break;
//		}
//		else if (rsp1 == 3 && rsp2 == 2)
//		{
//			printf("당신은 보 선택, 컴퓨터는 가위 선택, 당신이 졌습니다! \n");
//			printf("게임의 결과: %d승, %d무 \n", win, tie);
//			break;
//		}
//	}
//
//	return 0;
//}
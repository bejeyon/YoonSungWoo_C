//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void)
//{
//	int rsp1, rsp2,win=0,tie=0;
//	srand((int)time(NULL));	// ����ð��� �̿��ؼ� ���� ����
//
//	while (1)
//	{
//		rsp2 = rand() % 3 + 1;
//		printf("������ 1, ������ 2, ���� 3: ");
//		scanf("%d", &rsp1);
//		if (rsp1 == 1 && rsp2 == 2)
//		{
//			win++;
//			printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �̰���ϴ�! \n");
//		}
//		else if (rsp1 == 2 && rsp2 == 3)
//		{
//			win++;
//			printf("����� ���� ����, ��ǻ�ʹ� �� ����, �̰���ϴ�! \n");
//		}
//		else if (rsp1 == 3 && rsp2 == 1)
//		{
//			win++;
//			printf("����� �� ����, ��ǻ�ʹ� ���� ����, �̰���ϴ�! \n");
//		}
//		else if (rsp1 == 1 && rsp2 == 1)
//		{
//			tie++;
//			printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �����ϴ�! \n");
//		}
//		else if (rsp1 == 2 && rsp2 == 2)
//		{
//			tie++;
//			printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �����ϴ�! \n");
//		}
//		else if (rsp1 == 3 && rsp2 == 3)
//		{
//			tie++;
//			printf("����� �� ����, ��ǻ�ʹ� �� ����, �����ϴ�! \n");
//		}
//		else if (rsp1 == 1 && rsp2 == 3)
//		{
//			printf("����� ���� ����, ��ǻ�ʹ� �� ����, ����� �����ϴ�! \n");
//			printf("������ ���: %d��, %d�� \n", win, tie);
//			break;
//		}
//		else if (rsp1 == 2 && rsp2 == 1)
//		{
//			printf("����� ���� ����, ��ǻ�ʹ� ���� ����, ����� �����ϴ�! \n");
//			printf("������ ���: %d��, %d�� \n", win, tie);
//			break;
//		}
//		else if (rsp1 == 3 && rsp2 == 2)
//		{
//			printf("����� �� ����, ��ǻ�ʹ� ���� ����, ����� �����ϴ�! \n");
//			printf("������ ���: %d��, %d�� \n", win, tie);
//			break;
//		}
//	}
//
//	return 0;
//}
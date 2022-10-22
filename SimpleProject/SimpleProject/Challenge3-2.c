//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////void Dalpangi(int num)
////{
////	int Dal[9][9];
////	int i=0, j=0, k=0, h=0;
////
////	if (0<num)
////	{
////		while (i < 4*(num-1))
////		{
////			if (j == h && k < num - 1 - h)
////			{
////				Dal[j][k] = i + 1;
////				k++;
////				i++;
////				continue;
////			}
////			else if (j < num - 1 - h && k == num -1- h)
////			{
////				Dal[j][k] = i + 1;
////				j++;
////				i++;
////				continue;
////			}
////			else if (j == num -1- h && h < k && k <= num -1- h)
////			{
////				Dal[j][k] = i + 1;
////				k--;
////				i++;
////				continue;
////			}
////			else if (h < j && j <= num -1- h && k == h)
////			{
////				Dal[j][k] = i + 1;
////				j--;
////				i++;
////				continue;
////			}
////			else
////				h++;
////				break;
////		}
////
////		Dalpangi(num - 1);
////
////		for (j = 0; j < num; j++)
////		{
////			for (k = 0; k < num; k++)
////				printf("%d ", Dal[j][k]);
////			printf("\n");
////		}
////	}
////	else
////	{
////		return;
////	}
////}
//
//void Dalpangi(int num)
//{
//	int Dal[9][9];
//	int i = 0, j = 0, k = 0, h = 0;
//
//	if (0 < num)
//	{
//		for (i = 0; i < num-1; i++)
//		{
//			Dal[0][i] = i + 1;
//			Dal[num - 1][num - 1 - i] = 2 * (num - 1) + i+1;
//		}
//
//		for (i = 0; i < num - 1; i++)
//		{
//			Dal[i][num-1] = 1*(num-1)+i + 1;
//			Dal[num - 1-i][0] = 3 * (num - 1) + i + 1;
//		}
//
//
//
//		for (j = 0; j < num; j++)
//		{
//			for (k = 0; k < num; k++)
//				printf("%d ", Dal[j][k]);
//			printf("\n");
//		}
//	}
//	else
//	{
//		return;
//	}
//}
//
//int main(void)
//{
//	int n;
//	printf("배열 한 변의 길이 n 입력: ");
//	scanf("%d", &n);
//	Dalpangi(n);
//}
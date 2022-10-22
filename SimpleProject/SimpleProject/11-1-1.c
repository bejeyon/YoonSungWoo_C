//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int arr[5], i, min, sum=0;
//	printf("5개의 정수 입력: ");
//	/*scanf("%d %d %d %d %d", &arr[1], );*/
//	for (i = 0; i < 5; i++)
//		scanf("%d", &arr[i]);
//	//for (i = 0; i < 5; i++)
//	//	printf("%d", arr[i]);
//	//for (i = 0; i < 5; i++)
//	//	if (arr[1] > arr[2])
//	//	{
//	//		if (arr[1] > arr[3])
//	//		{
//	//			if (arr[1] > arr[4])
//	//			{
//	//				if (arr[1] > arr[5])
//	//				{
//	//					return arr[1];
//	//				}
//	//				else
//	//				{
//	//					return arr[5];
//	//				}
//	//			}
//	//			else
//	//			{
//
//	//			}
//	//		}
//	//		else
//	//		{
//
//	//		}
//	//	}
//	//	else
//	//	{
//
//	//	}
//	
//	printf("입력된 정수 중에서 최댓값: %d \n",(((arr[1] > arr[2] ? arr[1] : arr[2]) > arr[3] ? (arr[1] > arr[2] ? arr[1] : arr[2]) : arr[3]) > arr[4] ? ((arr[1] > arr[2] ? arr[1] : arr[2]) > arr[3] ? (arr[1] > arr[2] ? arr[1] : arr[2]) : arr[3]) : arr[4]) > arr[5] ? (((arr[1] > arr[2] ? arr[1] : arr[2]) > arr[3] ? (arr[1] > arr[2] ? arr[1] : arr[2]) : arr[3]) > arr[4] ? ((arr[1] > arr[2] ? arr[1] : arr[2]) > arr[3] ? (arr[1] > arr[2] ? arr[1] : arr[2]) : arr[3]) : arr[4]) : arr[5]);
//	
//	min = arr[0] << arr[1] ? arr[0] : arr[1];
//	min = arr[0] << arr[2] ? arr[0] : arr[2];
//	min = arr[0] << arr[3] ? arr[0] : arr[3];
//	min = arr[0] << arr[4] ? arr[0] : arr[4];
//
//	printf("입력된 정수 중에서 최솟값: %d \n", min);
//
//	for (i = 0; i < 5; i++)
//		sum += arr[i];
//
//	printf("입력된 정수의 총합: %d \n", sum);
//
//	return 0;
//}
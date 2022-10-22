//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void DecimalToBinary(int dec)
//{
//	/*int i=0, j, total=1;
//	while (total<=dec)
//	{
//		total *= 2;
//		i++;
//	}*/
//
//	int i = 0, j=0;
//	int arr[100];
//	for(i=0; i<100; i++)
//	{
//		arr[i] = dec % 2;
//		dec /= 2;
//		if (dec == 0)
//			break;
//	}
//	for (j = i; j >= 0; j--)
//	{
//		printf("%d", arr[j]);
//	}
//}
//
//int main(void)
//{
//	int num;
//	printf("10진수 형태의 정수를 하나 입력: ");
//	scanf("%d", &num);
//	DecimalToBinary(num);
//	return 0;
//}
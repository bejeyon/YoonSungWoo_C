//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int length, check1, check2;
//	int i;
//	printf("�Է��� ���ڿ��� �ִ� ����?: ");
//	scanf("%d", &length);
//	while (getchar() != '\n')	// �߰�ȣ ���� ��. ����? �ϴ� ������ �ϰ� while�� �������� �Ǵ�.
//	{
//		getchar() != '\n';
//	}
//	check1 = length;
//	check2 = length;
//	char* arr = (char*)calloc(sizeof(char)*(length + 1), sizeof(char));
//	printf("%d \n", length);
//	printf("���ڿ� �Է�: ");
//	gets(arr);
//	printf("%s \n", arr);
//	printf("%d \n", sizeof(arr));	// �ڲ� 8�� ��... �����ʹϱ�. �ּҰ��� ���������ϱ�.
//
//	while (check1>=0)
//	{
//		if (arr[check1] == 32)
//		{
//			for (i = check1+1; i < check2; i++)
//				printf("%c", arr[i]);
//			check2 = check1;
//			printf(" ");
//		}
//		check1--;
//		if (check1 == 0)
//		{
//			for(i=0;i<check2;i++)
//				printf("%c ", arr[i]);
//		}
//	}
//
//	free(arr);
//	return 0;
//}

//void ReverseArray(void)
//{
//	printf("�Է��� ���ڿ��� �ִ� ����?: ");
//	scanf("%d", &len);
//	char* arr = (char*)malloc(sizeof(char) * (len + 1), sizeof(char));
//	printf("%d", len);
//	printf("���ڿ� �Է�: ");
//	gets(arr);
//	printf("%s", arr);
//	printf("%d", sizeof(arr));
//}
//
//int main(void)
//{
//	
//	
//
//
//	return 0;
//}

//char* ReadUserName(int len)
//{
//	char* arr = (char*)malloc(sizeof(char) * len);
//	printf("���ڿ� �Է�: ");
//	gets(arr);
//	return arr;
//}
//
//int main(void)
//{
//	char* arr1;
//	int len;
//	printf("���ڿ� ����: ");
//	scanf("%d", &len);
//	while (getchar() != '\n');
//	arr1 = ReadUserName(len);
//	printf("arr1: %s \n", arr1);
//
//	printf("again arr1: %s \n", arr1);
//
//	free(arr1);
//	return 0;
//}
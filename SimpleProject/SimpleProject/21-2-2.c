//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	char str1[20];
//	char str2[20];
//	char str3[40];
//	int i = 0, j=0, k=0;
//
//	printf("문자열 입력 1: ");
//	fgets(str1,19,stdin);
//	for (i = 0; i < 19; i++)
//	{
//		if (str1[i] == '\n')
//		{
//			str1[i] = 0;
//			break;
//		}
//		else;
//	}
//	printf("문자열 입력 2: ");
//	fgets(str2, 19, stdin);
//	for (j = 0; j < 19; j++)
//	{
//		if (str2[j] == '\n')
//		{
//			str2[j] = 0;
//			break;
//		}
//		else;
//	}
//
//	for (k = 0; k < 40; k++)
//	{
//		str3[k] = 0;
//	}
//
//	strncpy(str3, str1, i);
//	strncat(str3, str2, j);
//
//	fputs(str3, stdout);
//
//	return 0;
//}
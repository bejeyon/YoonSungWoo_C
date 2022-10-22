//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	char str1[100];
//	char str2[100];
//	int i=0, ii=0, j=0, jj=0, age1=0, age2=0;
//	printf("이름과 나이를 입력하시오(이름 띄우고 나이는 아라비아 숫자로) 1: ");
//	fgets(str1, 100, stdin);
//	printf("이름과 나이를 입력하시오(이름 띄우고 나이는 아라비아 숫자로) 2: ");
//	fgets(str2, 100, stdin);
//
//	for (i = 0; i < 100; i++)
//	{
//		if (str1[i] == '\n')
//		{
//			str1[i] = 0;
//		}
//		else;
//	}
//
//	for (j = 0; j < 100; j++)
//	{
//		if (str2[j] == '\n')
//		{
//			str2[j] = 0;
//		}
//		else;
//	}
//
//	printf("%d \n", atoi(str1));
//	printf("%d \n", atoi(str2));
//
//	age1 = atoi(str1);
//	age2 = atoi(str2);
//
//	for (ii = 0; ii < 100; ii++)
//	{
//		if (str1[ii] == ' ')
//		{
//			break;
//		}
//		else;
//	}
//
//	for (jj = 0; jj < 100; jj++)
//	{
//		if (str2[jj] == ' ')
//		{
//			break;
//		}
//		else;
//	}
//
//	if (str1[ii+1]==str2[jj+1])
//	{
//		if(str1[ii+2]==str2[jj+2])
//			printf("두 사람의 나이가 같습니다.");
//		else
//			printf("두 사람의 나이가 다릅니다.");
//	}
//	else
//		printf("두 사람의 나이가 다릅니다.");
//
//	for (ii = 0; ii < 100; ii++)
//	{
//		if (str1[ii] == ' ')
//		{
//			str1[ii] = 0;
//		}
//		else;
//	}
//
//	for (jj = 0; jj < 100; jj++)
//	{
//		if (str2[jj] == ' ')
//		{
//			str2[jj] = 0;
//		}
//		else;
//	}
//
//	if (!strcmp(str1, str2))
//		printf("두 사람의 이름이 같습니다.");
//	else
//		printf("두 사람의 이름이 다릅니다.");
//
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////int main(void)
////{
////	FILE* fp = fopen("mystory.txt", "wt");
////	char str[20];
////
////	if (fp == NULL) {
////		puts("���Ͽ��� ����!");
////		return -1;
////	}
////
////	puts("#�̸�: ");
////	fputs("#�̸�: ", fp);
////	while (fputs(str, fp) != '\n')
////	{
////		fgets(str, sizeof(str), stdin);
////		fputs(str, fp);
////	}
////
////
////	puts("#�ֹι�ȣ: ");
////	fputs("#�ֹι�ȣ: ", fp);
////	while (fputs(str, fp) != '\n')
////	{
////		fgets(str, sizeof(str), stdin);
////		fputs(str, fp);
////	}
////
////
////	puts("#��ȭ��ȣ: ");
////	fputs("#��ȭ��ȣ: ", fp);
////	while (fputs(str, fp) != '\n')
////	{
////		fgets(str, sizeof(str), stdin);
////		fputs(str, fp);
////	}
////
////
////	fclose(fp);
////	return 0;
////}
//
//int main(void)
//{
//	FILE* fp = fopen("mystory.txt", "wt");
//	char str[20];
//
//	if (fp == NULL) {
//		puts("���Ͽ��� ����!");
//		return -1;
//	}
//
//	fputs("#�̸�: ������ \n", fp);
//	fputs("#�ֹι�ȣ: 900208-1012589 \n", fp);
//	fputs("#��ȭ��ȣ: 010-1111-2222 \n", fp);
//
//	fclose(fp);
//	return 0;
//}
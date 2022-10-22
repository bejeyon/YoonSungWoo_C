//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////int main(void)
////{
////	FILE* fp = fopen("mystory.txt", "wt");
////	char str[20];
////
////	if (fp == NULL) {
////		puts("파일오픈 실패!");
////		return -1;
////	}
////
////	puts("#이름: ");
////	fputs("#이름: ", fp);
////	while (fputs(str, fp) != '\n')
////	{
////		fgets(str, sizeof(str), stdin);
////		fputs(str, fp);
////	}
////
////
////	puts("#주민번호: ");
////	fputs("#주민번호: ", fp);
////	while (fputs(str, fp) != '\n')
////	{
////		fgets(str, sizeof(str), stdin);
////		fputs(str, fp);
////	}
////
////
////	puts("#전화번호: ");
////	fputs("#전화번호: ", fp);
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
//		puts("파일오픈 실패!");
//		return -1;
//	}
//
//	fputs("#이름: 윤성우 \n", fp);
//	fputs("#주민번호: 900208-1012589 \n", fp);
//	fputs("#전화번호: 010-1111-2222 \n", fp);
//
//	fclose(fp);
//	return 0;
//}
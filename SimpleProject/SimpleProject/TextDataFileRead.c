//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	char str[30];
//	int ch;
//	FILE* fp = fopen("simple.txt", "rt");
//	if (fp == NULL) {
//		puts("���Ͽ��� ����!");
//		return -1;
//	}
//
//	ch = fgetc(fp);
//	printf("%c \n", ch);
//	ch = fgetc(fp);
//	printf("%c \n", ch);
//
//	fgets(str, sizeof(str), fp);
//	printf("%s", str);
//	fgets(str, sizeof(str), fp);
//	printf("%s", str);
//	
//	fclose(fp);
//	return 0;
//}
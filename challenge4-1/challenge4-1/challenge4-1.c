//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//typedef struct biblography
//{
//	char title[99];
//	char author[99];
//	int page;
//} Biblo;
//
//Biblo book[3];
//
//int main(void)
//{
//	int i;
//
//	for (i = 0; i < 3; i++)
//	{
//		puts("����: ");
//		fgets(book[i].title, 99, stdin);
//		puts("����: ");
//		fgets(book[i].author, 99, stdin);
//		puts("������ ��: ");
//		scanf("%d", &(book[i].page));
//		while (getchar() != '\n');
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("book %d \n\n", i);
//		puts("����: ");
//		puts(book[i].title);
//		puts("����: ");
//		puts(book[i].author);
//		puts("������ ��: ");
//		printf("%d \n\n", book[i].page);
//	}
//
//	return 0;
//}
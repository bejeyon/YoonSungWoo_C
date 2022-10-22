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
//		puts("力格: ");
//		fgets(book[i].title, 99, stdin);
//		puts("历磊: ");
//		fgets(book[i].author, 99, stdin);
//		puts("其捞瘤 荐: ");
//		scanf("%d", &(book[i].page));
//		while (getchar() != '\n');
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("book %d \n\n", i);
//		puts("力格: ");
//		puts(book[i].title);
//		puts("历磊: ");
//		puts(book[i].author);
//		puts("其捞瘤 荐: ");
//		printf("%d \n\n", book[i].page);
//	}
//
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct biblography
//{
//	char title[50];
//	char author[50];
//	int page;
//} Biblo;
//
//Biblo* book[3];
//
//int main(void)
//{
//	int i;
//
//	for (i = 0; i < 3; i++)
//	{
//		book[i] = (Biblo*)malloc(104);
//		printf("力格: ");
//		scanf("%s", book[i]->title);
//		printf("历磊: ");
//		scanf("%s", book[i]->author);
//		printf("其捞瘤 荐: ");
//		scanf("%d", &(book[i]->page));
//		printf("\n");
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("book %d \n", i + 1);
//		printf("力格: %s \n", book[i]->title);
//		printf("历磊: %s \n", book[i]->author);
//		printf("其捞瘤 荐: %d \n\n", book[i]->page);
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		free(book[i]);
//	}
//
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "structdefinition.h"

extern Book Biblo[999];

int main(void)
{
	int i;
	
	for (i = 0; i < 3; i++)
	{
		printf("도서 제목 입력: \n");
		fgets(Biblo[i].title,99,stdin);
		printf("도서 저자명 입력: \n");
		fgets(Biblo[i].author,99,stdin);
		printf("도서 페이지수 입력: \n");
		scanf("%d", &Biblo[i].pages);
		while (getchar() != '\n');
		printf("\n\n");
	}

	for (i = 0; i < 3; i++)
	{
		printf("%d번째 책 \n", i+1);
		printf("도서 제목: %s", Biblo[i].title);
		printf("도서 저자명: %s", Biblo[i].author);
		printf("도서 페이지수: %d", Biblo[i].pages);
		printf("\n\n");
	}

}
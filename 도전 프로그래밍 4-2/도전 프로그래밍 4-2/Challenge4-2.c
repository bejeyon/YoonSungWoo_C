#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct biblographic
{
	char* title[99];
	char* author[99];
	int pages;
} Book;

int main(void)
{
	int i;
	Book num;

	for (i = 0; i < 3; i++)
	{
		Book* Biblo = (Book*)calloc(3, sizeof(Book));
		printf("���� ���� �Է�: \n");
		fgets(Biblo[i].title, 99, stdin);
		printf("���� ���ڸ� �Է�: \n");
		fgets(Biblo[i].author, 99, stdin);
		printf("���� �������� �Է�: \n");
		scanf("%d", &Biblo[i].pages);
		while (getchar() != '\n');
		printf("\n\n");
	}

	for (i = 0; i < 3; i++)
	{
		printf("%d��° å \n", i + 1);
		printf("���� ����: %s", Biblo[i].title);
		printf("���� ���ڸ�: %s", Biblo[i].author);
		printf("���� ��������: %d", Biblo[i].pages);
		printf("\n\n");
	}

}
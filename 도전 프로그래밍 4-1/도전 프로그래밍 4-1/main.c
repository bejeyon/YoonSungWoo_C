#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "structdefinition.h"

extern Book Biblo[999];

int main(void)
{
	int i;
	
	for (i = 0; i < 3; i++)
	{
		printf("���� ���� �Է�: \n");
		fgets(Biblo[i].title,99,stdin);
		printf("���� ���ڸ� �Է�: \n");
		fgets(Biblo[i].author,99,stdin);
		printf("���� �������� �Է�: \n");
		scanf("%d", &Biblo[i].pages);
		while (getchar() != '\n');
		printf("\n\n");
	}

	for (i = 0; i < 3; i++)
	{
		printf("%d��° å \n", i+1);
		printf("���� ����: %s", Biblo[i].title);
		printf("���� ���ڸ�: %s", Biblo[i].author);
		printf("���� ��������: %d", Biblo[i].pages);
		printf("\n\n");
	}

}
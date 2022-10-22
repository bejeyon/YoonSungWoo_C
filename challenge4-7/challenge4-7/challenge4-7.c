#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct phonebook
{
	char name[20];
	char pnumber[20];
} Pbook;

void Menu(void)
{
	printf("***** MENU ***** \n");
	printf("1. Insert \n");
	printf("2. Delete \n");
	printf("3. Search \n");
	printf("4. Print All \n");
	printf("5. Exit \n");
	printf("Choose the item: ");
}

Pbook list[999];

int main(void)
{
	int opt = 0, order = 0, i=0;
	char temname[20];
	int readCnt;

	FILE* fp = fopen("PhoneBook.bin", "rb");
	while (1)
	{
		readCnt = fread((void*)&list[i], sizeof(list[i++]), 1, fp);

		if (readCnt < 1)
		{
			if (feof(fp) != 0)
			{
				puts("파일 불러오기 완료");
				break;
			}
			else
				puts("파일 불러오기 실패");

			break;
		}
	}
	fclose(fp);

	order = i;

	while (opt != 5)
	{
		Menu();
		scanf("%d", &opt);

		switch (opt)
		{
		case 1:
			printf("[ INSERT ] \n");
			printf("Input Name: ");
			scanf("%s", list[order].name);
			printf("Input Tell Number: ");
			scanf("%s", list[order].pnumber);
			printf(" Data Inserted \n");
			order++;
			break;
		case 2:
			printf("[ Delete ] \n");
			printf("Input Name: ");
			scanf("%s", temname);
			for (i = 0; i < order; i++)
			{
				if (strcmp(list[i].name, temname) == 0)
				{
					list[i].name[0] = 0;
					list[i].pnumber[0] = 0;
				}
			}
			printf(" Data Deleted \n");
			break;
		case 3:
			printf("[ Search ] \n");
			printf("Input Name: ");
			scanf("%s", temname);
			for (i = 0; i < order; i++)
			{
				if (strcmp(list[i].name, temname) == 0)
				{
					printf("%s \n", list[i].name);
					printf("%s \n", list[i].pnumber);
				}
			}
			printf(" Data Searched \n");
			break;
		case 4:
			printf("[ Print All Data ] \n");
			for (i = 0; i < order; i++)
			{
				printf("Name: %s Tel: %s \n", list[i].name, list[i].pnumber);
			}
			break;
		case 5:
			printf("[ Exit ] \n");
			break;
		default:
			printf("[ Error ] \n");
			printf(" You pressed wrong number. Choose the number 1~5 \n");
			break;
		}
		
		FILE* fp = fopen("PhoneBook.bin", "wb");
		for (i = 0; i < order; i++)
			fwrite((void*)&list[i], sizeof(list[i]), 1, fp);
		fclose(fp);
	}
	return 0;
}
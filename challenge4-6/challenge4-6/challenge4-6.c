//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//typedef struct phonebook
//{
//	char name[20];
//	char pnumber[20];
//} Pbook;
//
//void Menu(void)
//{
//	printf("***** MENU ***** \n");
//	printf("1. Insert \n");
//	printf("2. Delete \n");
//	printf("3. Search \n");
//	printf("4. Print All \n");
//	printf("5. Exit \n");
//	printf("Choose the item: ");
//}
//
//Pbook* list[999];
//
//int main(void)
//{
//	int opt=0, order = 0, i;
//	char temname[20];
//	while (opt!=5)
//	{
//		Menu();
//		scanf("%d", &opt);
//
//		switch (opt)
//		{
//		case 1:
//			list[order] = (Pbook*)calloc(1,sizeof(Pbook) * 1);
//			printf("[ INSERT ] \n");
//			printf("Input Name: ");
//			scanf("%s", list[order]->name);
//			printf("Input Tell Number: ");
//			scanf("%s", list[order]->pnumber);
//			printf(" Data Inserted \n");
//			order++;
//			break;
//		case 2:
//			printf("[ Delete ] \n");
//			printf("Input Name: ");
//			scanf("%s", temname);
//			for (i = 0; i <= order; i++)
//			{
//				if (strcmp(list[i]->name,temname)==0)
//				{
//					list[i]->name[0] = 0;
//					list[i]->pnumber[0] = 0;
//				}
//			}
//			printf(" Data Deleted \n");
//			break;
//		case 3:
//			printf("[ Search ] \n");
//			printf("Input Name: ");
//			scanf("%s", temname);
//			for (i = 0; i <= order; i++)
//			{
//				if (strcmp(list[i]->name, temname) == 0)
//				{
//					printf("%s \n", list[i]->name);
//					printf("%s", list[i]->pnumber);
//				}
//			}
//			printf(" Data Searched \n");
//			break;
//		case 4:
//			printf("[ Print All Data ] \n");
//			for (i = 0; i <= order; i++)
//			{
//				printf("Name: %s Tel: %s \n", list[i]->name, list[i]->pnumber);
//			}
//			break;
//		case 5:
//			printf("[ Exit ] \n");
//			break;
//		default:
//			printf("[ Error ] \n");
//			printf(" You pressed wrong number. Choose the number 1~5 \n");
//			break;
//		}
//
//		for (i = 0; i < order; i++)
//		{
//			free(list[i]);
//		}
//		
//	}
//	return 0;
//}
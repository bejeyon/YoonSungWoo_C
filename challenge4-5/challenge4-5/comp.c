#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fp1 = fopen("d1.txt", "rt");
	FILE* fp2 = fopen("d2.txt", "rt");
	int ch1, ch2;
	long fpos1, fpos2;
	int s1, s2;

	if (fp1==NULL||fp2==NULL)
	{
		puts("���Ͽ��� ����!");
		return -1;
	}

	while ((ch1=fgetc(fp1))!=EOF&&(ch2 = fgetc(fp2)) != EOF)
	{
		printf("ch1: %c, ch2: %c \n", ch1, ch2);
		if (ch1 != ch2)
		{
			break;
		}
			
	}

	fpos1 = ftell(fp1);
	fpos2 = ftell(fp2);
	printf("before fpos1: %ld, fpos2: %ld \n", fpos1, fpos2);

	fseek(fp1, -1, SEEK_END);
	fseek(fp2, -1, SEEK_END);

	fpos1 = ftell(fp1);
	fpos2 = ftell(fp2);
	printf("after fpos1: %ld, fpos2: %ld \n", fpos1, fpos2);

	if (fpos1 == fpos2)
		puts("�� ���� ������ ������ ��ġ�մϴ�. \n");
	else
		puts("�� ���� ������ ��ġ���� �ʽ��ϴ�. \n");

	/*if (feof(fp1) != 0 && feof(fp2) != 0)
		puts("�� ���� ������ ������ ��ġ�մϴ�. \n");
	else
		puts("�� ���� ������ ��ġ���� �ʽ��ϴ�. \n");*/

	fclose(fp1);
	fclose(fp2);

	return 0;
}
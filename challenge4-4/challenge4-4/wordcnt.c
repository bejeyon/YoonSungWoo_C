#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char word[99];
	FILE* fp = fopen("text.txt", "rt");
	int ret, Acnt=0, Pcnt=0;

	while (1)
	{
		ret = fscanf(fp, "%s", word);
		if (ret == EOF)
			break;
		if (word[0]=='A')
		{
			Acnt++;
		}
		if (word[0] == 'P')
		{
			Pcnt++;
		}
	}

	printf("A로 시작하는 단어의 수: %d \n", Acnt);
	printf("P로 시작하는 단어의 수: %d \n", Pcnt);

	fclose(fp);

	return 0;
}
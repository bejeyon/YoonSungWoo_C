//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	char word[50];
//	int idx=0, i,tem;
//	printf("영단어 입력: ");
//	scanf("%s", word);
//	while (word[idx]!=0)
//	{
//		idx++;
//	}
//	for (i = 0; i < idx/2; i++)
//	{
//		tem = word[i];
//		word[i] = word[idx - i-1];
//		word[idx - i-1] = tem;
//	}
//	printf("영단어 뒤집어서 출력: %s", word);
//	return 0;
//}
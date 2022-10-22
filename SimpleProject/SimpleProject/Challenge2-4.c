//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void Palindrome(char* word)
//{
//	int i = 0, j=0;
//	int len;
//	while (word[i]!=0)
//	{
//		i++;
//	}
//	printf("단어의 길이: %d \n", i);
//	len = i - 1;
//	printf("lenth: %d \n", len);
//	for (j = 0; j<=len/2; j++)
//	{
//		if (word[j] == word[len - j])
//		{
//			if (j == len / 2)
//				printf("회문 입니다. \n");
//		}
//		else
//		{
//			printf("회문이 아닙니다. \n");
//			break;
//		}	
//	}
//}
//
//int main(void)
//{
//	char arr[50];
//	printf("단어 입력: ");
//	scanf("%s", arr);
//	printf("입력된 단어: %s \n", arr);
//	Palindrome(arr);
//	return 0;
//}
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
//	printf("�ܾ��� ����: %d \n", i);
//	len = i - 1;
//	printf("lenth: %d \n", len);
//	for (j = 0; j<=len/2; j++)
//	{
//		if (word[j] == word[len - j])
//		{
//			if (j == len / 2)
//				printf("ȸ�� �Դϴ�. \n");
//		}
//		else
//		{
//			printf("ȸ���� �ƴմϴ�. \n");
//			break;
//		}	
//	}
//}
//
//int main(void)
//{
//	char arr[50];
//	printf("�ܾ� �Է�: ");
//	scanf("%s", arr);
//	printf("�Էµ� �ܾ�: %s \n", arr);
//	Palindrome(arr);
//	return 0;
//}
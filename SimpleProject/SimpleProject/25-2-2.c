//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int *str=(int*)calloc(5,sizeof(int));
//	int i=0, num=0,indi=5, j=0;
//	while (num!= -1)
//	{
//		puts("정수입력: ");
//		scanf("%d", &num);
//		str[i] = num;
//		i++;
//		if (i==indi)
//		{
//			indi += 3;
//			str = (int*)realloc(str, sizeof(int) * indi);
//		}
//	}
//	for (j = 0; j < i; j++)
//	{
//		printf("%d ", str[j]);
//	}
//	return 0;
//}
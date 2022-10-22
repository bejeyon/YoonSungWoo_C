//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void MaxAndMin(int**maxdptr,int**mindptr,int*array)
//{
//	int i = 0, j = 0, k = 0, h = 0;
//
//	printf("%d \n", array[4]);
//
//	for (i = 0; i < 4; i++)
//	{
//		j = array[j] > array[i + 1] ? j : (i + 1);
//	}
//
//	printf("j = %d \n", j);
//
//	*maxdptr = &array[j];
//
//	for (k = 0; k < 4; k++)
//	{
//		h = array[h] < array[k + 1] ? h : (k + 1);
//	}
//
//	printf("h = %d \n", h);
//
//	*mindptr = &array[h];
//}
//
//int main(void)
//{
//	int* maxPtr;
//	int* minPtr;
//	int arr[5]={0,1,2,3,4};
//
//	MaxAndMin(&maxPtr, &minPtr, &arr[0]);
//	printf("*maxPtr, *minPtr: %d %d \n", *maxPtr, *minPtr);
//	
//	return 0;
//}
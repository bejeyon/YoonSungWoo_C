//#include <stdio.h>
//
////int main(void)
////{
////	int arr0[4][4];
////	int i, j;
////	for (i = 0; i < 4; i++)
////	{
////		for (j = 0; j < 4; j++)
////		{
////			arr0[i][j] = (i * 4) + (j + 1);
////		}
////	}
////
////	for (i = 0; i < 4; i++)
////	{
////		for (j = 0; j < 4; j++)
////		{
////			printf("%d ", arr0[i][j]);
////		}
////		printf("\n");
////	}
////	printf("\n");
////
////	for (i = 0; i < 4; i++)
////	{
////		for (j = 0; j < 4; j++)
////		{
////			arr0[i][j] = (i + 1) + (12 - j * 4);
////		}
////	}
////
////	for (i = 0; i < 4; i++)
////	{
////		for (j = 0; j < 4; j++)
////		{
////			printf("%d ", arr0[i][j]);
////		}
////		printf("\n");
////	}
////	printf("\n");
////
////	for (i = 0; i < 4; i++)
////	{
////		for (j = 0; j < 4; j++)
////		{
////			arr0[i][j] = (16-i*4) +(-j);
////		}
////	}
////
////	for (i = 0; i < 4; i++)
////	{
////		for (j = 0; j < 4; j++)
////		{
////			printf("%d ", arr0[i][j]);
////		}
////		printf("\n");
////	}
////	printf("\n");
////
////	for (i = 0; i < 4; i++)
////	{
////		for (j = 0; j < 4; j++)
////		{
////			arr0[i][j] = (-i) + ((j+1)*4);
////		}
////	}
////
////	for (i = 0; i < 4; i++)
////	{
////		for (j = 0; j < 4; j++)
////		{
////			printf("%d ", arr0[i][j]);
////		}
////		printf("\n");
////	}
////	return 0;
////}
//
//int main(void)
//{
//	int arr0[4][4], arr1[4][4], arr2[4][4], arr3[4][4];
//	int i, j, temp;
//	int* temptr=0;
//	int* aptr[4][4];
//	
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			arr0[i][j] = (i * 4) + (j + 1);
//		}
//	}
//
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr0[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			aptr[i][j] = &arr0[i][j];
//		}
//	}
//
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			arr1[i][j] = arr0[3-j][i];
//		}
//	}
//
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr1[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			arr2[i][j] = arr1[3 - j][i];
//		}
//	}
//
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			arr3[i][j] = arr2[3 - j][i];
//		}
//	}
//
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr3[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	return 0;
//}
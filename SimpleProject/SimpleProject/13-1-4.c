//#include <stdio.h>
//
//int main(void)
//{
//	int arr[6] = { 1,2,3,4,5,6 };
//	int* ptr0 = &arr[0], * ptr5 = &arr[5];
//	int i = 0;
//	int tem = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		tem = *ptr0;
//		*ptr0 = *ptr5;
//		*ptr5 = tem;
//		ptr0++, ptr5--;
//	}
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d, ", arr[i]);
//	}
//	return 0;
//}
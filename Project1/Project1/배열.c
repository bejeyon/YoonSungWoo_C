#include <stdio.h>

int main_arr1(void)
{
	int arr[5];
	printf("���� 5���� �Է��Ͻÿ� \n");
	scanf_s("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	int num1 = arr[0] > arr[1] ? arr[0] : arr[1];
	int num2 = num1 > arr[2] ? num1 : arr[2];
	int num3 = num2 > arr[3] ? num2 : arr[3];
	int num4 = num3 > arr[4] ? num3 : arr[4];
	printf("�Էµ� ���� �߿��� �ִ� : %d \n", num4);
	num1 = arr[0] < arr[1] ? arr[0] : arr[1];
	num2 = num1 < arr[2] ? num1 : arr[2];
	num3 = num2 < arr[3] ? num2 : arr[3];
	num4 = num3 < arr[4] ? num3 : arr[4];
	printf("�Էµ� ���� �߿��� �ּڰ� : %d \n", num4);
	int i, sum = 0;
	for (i = 0; i < 5; i++)
	{
		sum += arr[i];
	}
	printf("�Էµ� ������ ���� : %d \n", sum);
	return 0;
}
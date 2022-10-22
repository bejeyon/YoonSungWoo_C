#include <stdio.h>

void Swap(int* ptr1, int* ptr2);

int main(void)
{
	int arr[9] = { 60, 20, 80, 10, 90, 30, 50, 36, 100 };

	int i, j, k, maxIdx;
	maxIdx = 0;
	
	for (i = 0; i < 8; i++) 
	{
		maxIdx = i;
		for (j = i + 1; j < 9; j++)
		{
			if (arr[maxIdx]>arr[j])
			{
				maxIdx = j;
			}
		}
		Swap(&arr[maxIdx], &arr[i]);
	}
	
	for (k = 0; k < 9; k++)
	{
		printf("%d ", arr[k]);
	}

	return 0;
}

void Swap(int* ptr1, int* ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
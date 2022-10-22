#include <stdio.h>

int main_08_2_2_1(void)
{
	int A = 0, Z = 0;
	for (A = 0;A<10; A++)
	{
		for (Z = 0;Z<10; Z++)
		{
			if (A + Z == 9)
				printf("A = %d, Z = %d \n", A, Z);
		}
	}
	return 0;
}

int main_08_2_2_2(void)
{
	int A = 0, Z = 0;
	for (A = 0; A < 10; A++)
	{
		for (Z = 0; Z < 10; Z++)
		{
			if (A + Z != 9)
				continue;
			printf("A = %d, Z = %d \n", A, Z);
		}
	}
	return 0;
}

int main_08_2_2_3(void)
{
	int A = 0, Z = 0;
	while (1)
	{
		for (Z = 0; Z < 10; Z++)
		{
			if (A + Z != 9)
				continue;
			printf("A = %d, Z = %d \n", A, Z);
		}
		A++;
		if (A > 9)
			break;
	}
	return 0;
}
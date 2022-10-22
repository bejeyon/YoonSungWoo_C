#include <stdio.h>

int main_08_2_1_1(void)
{
	int dan=2, is=1;
	for (dan = 2; dan < 9; dan++)
	{
		if (dan % 2 != 0)
			continue;
		for (is = 1; is <= dan; is++)
		{
			printf("%d x %d = %d \n", dan, is, dan * is);
		}
		printf("\n");
	}
	return 0;
}

int main_08_2_1_2(void)
{
	int dan = 2, is = 1;
	for (dan = 2; dan < 9; dan++)
	{
		if (dan % 2 != 0)
			continue;
		is = 1;
		while (1)
		{
			printf("%d x %d = %d \n", dan, is, dan * is);
			is++;
			if (is > dan)
				break;
		}
		printf("\n");
	}
	return 0;
}
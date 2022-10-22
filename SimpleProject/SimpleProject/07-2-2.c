#include <stdio.h>

int main_07_2_2(void)
{
	int i = 0;
	int j;

	while (i<5)
	{
		j = 0;

		while (j<i)
		{
			printf("o");
			j++;
		}
		printf("* \n");
		i++;
	}
	return 0;
}
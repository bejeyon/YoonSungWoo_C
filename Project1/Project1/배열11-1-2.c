#include <stdio.h>

int main_arr2(void)
{
	char sen[] = { 'G','o', 'o', 'd', ' ' , 't', 'i', 'm', 'e'};
	printf("%c %c %c %c %c %c %c %c %c \n", sen[0], sen[1], sen[2], sen[3], sen[4], sen[5], sen[6], sen[7], sen[8], sen[9]);
	for (int i = 0; i < 10; i++)
	{
		printf("%c ", sen[i]);
	}
	return 0;
}

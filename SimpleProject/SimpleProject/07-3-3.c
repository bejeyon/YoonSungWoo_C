//#include <stdio.h>
//
//int main(void)
//{
//	int cur = 2;
//	int is = 0;
//
//	while (cur < 10)	// 2�ܺ��� 9�ܱ��� �ݺ�
//	{
//		is = 1;	// ���ο� ���� ������ ���ؼ�
//		while (is < 10)	// �� ���� 1���� 9�� ���� ǥ��
//		{
//			printf("%dx%d=%d \n", cur, is, cur * is);
//			is++;
//		}
//		cur++;	// ���� ������ �Ѿ�� ���� ����
//	}
//	return 0;
//}

#include <stdio.h>

int main_07_3_3(void)
{
	int cur = 2;
	int is = 0;

	do
	{
		is = 1;
		do
		{
			printf("%dx%d=%d \n", cur, is, cur * is);
			is++;
		} while (is<10);
		cur++;
	} while (cur<10);

	//while (cur < 10)	// 2�ܺ��� 9�ܱ��� �ݺ�
	//{
	//	is = 1;	// ���ο� ���� ������ ���ؼ�
	//	while (is < 10)	// �� ���� 1���� 9�� ���� ǥ��
	//	{
	//		printf("%dx%d=%d \n", cur, is, cur * is);
	//		is++;
	//	}
	//	cur++;	// ���� ������ �Ѿ�� ���� ����
	//}
	//return 0;
}
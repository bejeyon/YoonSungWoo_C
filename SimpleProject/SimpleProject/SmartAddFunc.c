//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int Add(int num1, int num2)	// �������� (O), ��ȯ �� (O)
//{
//	return num1 + num2;
//}
//
//void ShowAddResult(int num)	// ��������(O), ��ȯ �� (X)
//{
//	printf("������� ���: %d \n", num);
//}
//
//int Readnum(void)	// �������� (X), ��ȯ �� (O)
//{
//	int num;
//	scanf("%d", &num);
//	return num;
//}
//
//void HowToUseThisProg(void)	// �������� (X), ��ȯ �� (X)
//{
//	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�. \n");
//	printf("��! �׷� �� ���� ������ �Է��ϼ���. \n");
//}
//
//int main(void)
//{
//	int result, num1, num2;
//	HowToUseThisProg();
//	num1 = Readnum();
//	num2 = Readnum();
//	result = Add(num1, num2);
//	ShowAddResult(result);
//	return 0;
//}
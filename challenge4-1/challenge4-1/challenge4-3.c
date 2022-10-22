#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct complexnumber
{
	double real;
	double imaginary;
} CN;

CN Add(CN num1, CN num2)
{
	CN result;
	result.real = num1.real + num2.real;
	result.imaginary = num1.imaginary + num2.imaginary;
	return result;
}

CN Mul(CN num1, CN num2)
{
	CN result;
	result.real = num1.real * num2.real - num1.imaginary * num2.imaginary;
	result.imaginary = num1.imaginary * num2.real + num1.real * num2.imaginary;
	return result;
}

int main(void)
{
	CN insertNum1, insertNum2, resultAdd, resultMul;
	printf("���Ҽ� �Է�1[�Ǽ� ���]: ");
	scanf("%lf %lf", &insertNum1.real, &insertNum1.imaginary);
	printf("���Ҽ� �Է�2[�Ǽ� ���]: ");
	scanf("%lf %lf", &insertNum2.real, &insertNum2.imaginary);
	resultAdd = Add(insertNum1, insertNum2);
	resultMul = Mul(insertNum1, insertNum2);

	printf("���� ���] �Ǽ�: %g, ���: %g \n", resultAdd.real, resultAdd.imaginary);
	printf("���� ���] �Ǽ�: %g, ���: %g \n", resultMul.real, resultMul.imaginary);
	return 0;
}
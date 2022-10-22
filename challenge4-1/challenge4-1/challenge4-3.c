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
	printf("복소수 입력1[실수 허수]: ");
	scanf("%lf %lf", &insertNum1.real, &insertNum1.imaginary);
	printf("복소수 입력2[실수 허수]: ");
	scanf("%lf %lf", &insertNum2.real, &insertNum2.imaginary);
	resultAdd = Add(insertNum1, insertNum2);
	resultMul = Mul(insertNum1, insertNum2);

	printf("합의 결과] 실수: %g, 허수: %g \n", resultAdd.real, resultAdd.imaginary);
	printf("곱의 결과] 실수: %g, 허수: %g \n", resultMul.real, resultMul.imaginary);
	return 0;
}
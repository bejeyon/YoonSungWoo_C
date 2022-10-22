//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//double CelToFah(double Cel);
//double FahToCel(double Fah);
//
//int main(void)
//{
//	double Cel,Fah,tem;
//	int opt;
//	printf("번호를 입력하시오. 1.섭씨 입력 화씨 출력 2.화씨 입력 섭씨 출력: ");
//	scanf("%d", &opt);
//
//	if (opt == 1)
//	{
//		printf("섭씨 온도 입력: ");
//		scanf("%lf", &Cel);
//		printf("섭씨 온도 %f의 화씨 온도 = %f \n", Cel, CelToFah(Cel));
//	}
//	else
//	{
//		printf("화씨 온도 입력: ");
//		scanf("%lf", &Fah);
//		printf("화씨 온도 %f의 섭씨 온도 = %f \n", Fah, FahToCel(Fah));
//	}
//
//	//printf("온도 입력: ");
//	//scanf("%lf", &tem);
//	//printf("%f의 온도= %f", tem, opt == 1 ? CelToFah(tem) : FahToCel(tem));
//	return 0;
//}
//
//double CelToFah(double Cel)
//{
//	return 1.8 * Cel + 32;
//}
//double FahToCel(double Fah)
//{
//	return (Fah - 32) / 1.8;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main_08_1_3_2(void)
//{
//	double kor, eng, math, ave;
//	printf("국어, 영어, 수학 점수 순서대로 입력: ");
//	scanf("%lf %lf %lf", kor, eng, math);
//	ave = (kor + eng + math) / 3;
//
//	if (ave >= 90)
//		printf("전체 평균 점수 90점 이상, 학점 A \n");
//	else if (ave >= 80)
//		printf("전체 평균 점수 80점 이상, 학점 B \n");
//	else if (ave >= 70)
//		printf("전체 평균 점수 70점 이상, 학점 C \n");
//	else if (ave >= 50)
//		printf("전체 평균 점수 50점 이상, 학점 D \n");
//	else
//		printf("전체 평균 점수 50점 미만, 학점 F \n");
//
//	return 0;
//}
//
//int main_08_1_3_1(void)
//{
//	int i = 0;
//	double num;
//	double sum = 0.0;
//	printf("국어, 영어, 수학 점수 순서대로 입력: ");
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%lf", &num);
//		sum += num;
//	}
//	if (sum / 3 >= 90)
//		printf("전체 평균 점수 90점 이상, 학점 A \n");
//	else if (sum / 3 >= 80)
//		printf("전체 평균 점수 80점 이상, 학점 B \n");
//	else if (sum / 3 >= 70)
//		printf("전체 평균 점수 70점 이상, 학점 C \n");
//	else if (sum / 3 >= 50)
//		printf("전체 평균 점수 50점 이상, 학점 D \n");
//	else
//		printf("전체 평균 점수 50점 미만, 학점 F \n");
//	return 0;
//}
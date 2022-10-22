//#include <stdio.h>
//
//int main(void)
//{
//	int n0=0, n1=1, n2=2, n3=3, n4=4;
//	int m0=5, m1=6, m2=7, m3=8, m4=9, m5=10, m6=11, m7=12, m8=13, m9=14, m10=15, m11=16, m12=17, m13=18, m14=19;
//	int* arr1[5] = { &n0,&n1,&n2,&n3,&n4 };
//	int* arr2[3][5]= { &m0, &m1, &m2, &m3, &m4, &m5, &m6, &m7, &m8, &m9, &m10, &m11, &m12, &m13, &m14 };
//
//	int** ptr1 = arr1;
//	int* (*ptr2)[5] = arr2;
//
//	printf("%d, %d \n%d, %d \n%d, %d \n", arr1[0], ptr1[0], arr1[1], ptr1[1], arr1[2], ptr1[2]);
//
//	printf("%d, %d \n%d, %d \n%d, %d \n", arr2[0][0], ptr2[0][0], arr2[0][1], ptr2[0][1], arr2[0][2], ptr2[0][2]);
//	return 0;
//}
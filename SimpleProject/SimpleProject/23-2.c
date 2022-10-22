//#include <stdio.h>
//
//typedef struct point
//{
//	int xpos;
//	int ypos;
//} Point;
//
//typedef struct rectangle
//{
//	Point pos1;
//	Point pos2;
//} Rectangle;
//
//void AreaOfRectangle(Rectangle *rptr)
//{
//	int area = ((rptr->pos1).xpos - (rptr->pos2).xpos) * ((rptr->pos1).ypos - (rptr->pos2).ypos);
//	if (area >= 0)
//		printf("Á÷»ç°¢ÇüÀÇ ³ÐÀÌ: %d \n\n", area);
//	else
//		printf("Á÷»ç°¢ÇüÀÇ ³ÐÀÌ: %d \n\n", -area);
//}
//
//void CoordinateOfRectangle(Rectangle *rptr)
//{
//	printf("Á¡1 ÁÂÇ¥: [%d, %d] \n", (rptr->pos1).xpos, (rptr->pos1).ypos);
//	printf("Á¡2 ÁÂÇ¥: [%d, %d] \n\n", (rptr->pos2).xpos, (rptr->pos2).ypos);
//}
//
//int main(void)
//{
//	Rectangle rec = { {0,0},{100,100} };
//	AreaOfRectangle(&rec);
//	CoordinateOfRectangle(&rec);
//	return 0;
//}
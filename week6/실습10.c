//#include <stdio.h>
//#define rows 8
//#define cols 16
//
//int image[rows][cols] = {
//	{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
//	{ 1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1 },
//	{ 1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1 },
//	{ 1,1,1,0,0,0,1,1,0,0,1,1,1,1,1,1 },
//	{ 1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1 },
//	{ 1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1 },
//	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1 },
//	{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 } };
//
//void display(int image[rows][cols])
//{
//	for (int r = 0; r < rows; r++) {
//		for (int c = 0; c < cols; c++) {
//			if (image[r][c] == 0) printf("*");
//			else printf("_");
//		}
//		printf("\n");
//	}
//}
//void inverse(int img[rows][cols])
//{
//	for (int r = 0; r < rows; r++) {
//		for (int c = 0; c < cols; c++) {
//			if (img[r][c] == 0) img[r][c] = 1;
//			else img[r][c] = 0;
//		}
//	}
//}
//
//int main(void)
//{
//	printf("변환전 이미지\n");
//	display(image);
//	inverse(image);
//	printf("\n\n변환후 이미지\n");
//	display(image);
//	return 0;
//}

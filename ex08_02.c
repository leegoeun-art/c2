//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define NUM 45
//
//int main(void)
//{
//	int cnt;
//
//	printf("1-45 ���� �� ���� 6�� ���");
//
//	srand((unsigned)time(NULL));
//
//	printf("srand() ��� : ");
//	for (cnt = 1; cnt <= 6; cnt++)
//		printf("%d", 1 + (rand() % NUM));
//
//	printf("\n");
//	return 0;

#include <stdio.h>
#include <math.h>
int main(void)
{
	double result, target = 3.5;

	printf("double�� ���� target�� �� : 3.58\n");

	result = ceil(target);
	printf("�ø� �Լ� ceil() ��� ��� : %.21f\n", result);

	result = floor(target);
	printf("���� �Լ� floor() ��� ��� : % .21f\n", result);
	return 0;
}
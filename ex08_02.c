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
//	printf("1-45 숫자 중 숫자 6개 출력");
//
//	srand((unsigned)time(NULL));
//
//	printf("srand() 출력 : ");
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

	printf("double형 변수 target의 값 : 3.58\n");

	result = ceil(target);
	printf("올림 함수 ceil() 사용 결과 : %.21f\n", result);

	result = floor(target);
	printf("내림 함수 floor() 사용 결과 : % .21f\n", result);
	return 0;
}
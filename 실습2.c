#include <stdio.h> // 디버그 - 창 - 메모리 - arr 치고 변수  4 바이트 표현

//arr 1,2,3 arrlen 1,2,3 다 메모리 창 띄워서 조사식 보기 
int main(void)
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[ ] = { 1,2,3,4,5,6,7 };
	int arr3[5] = { 1,2 };
	
	int ar1Len, ar2Len, ar3Len, i;

	printf("배열 arr1의 크기: %d \n", sizeof(arr1));
	printf("배열 arr2의 크기 : %d \n", sizeof(arr2));
	printf("배열 arr3의 크기 : %d \n", sizeof(arr3));
	
	ar1Len = sizeof(arr1) / sizeof(int);
	ar2Len = sizeof(arr2) / sizeof(int);
	ar3Len = sizeof(arr3) / sizeof(int); //배열의 크기, 길이, size 알 수 있음. = 배열의 element. 이 코드 채워넣으라고 할 듯 시험.

	for (i = 0; i < ar1Len; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");

	for (i = 0; i < ar2Len; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");

	for (i = 0; i < ar3Len; i++)
	{
		printf("%d ", arr3[i]);
	}
	printf("\n");
	
	return 0;
}
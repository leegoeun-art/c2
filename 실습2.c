#include <stdio.h> // ����� - â - �޸� - arr ġ�� ����  4 ����Ʈ ǥ��

//arr 1,2,3 arrlen 1,2,3 �� �޸� â ����� ����� ���� 
int main(void)
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[ ] = { 1,2,3,4,5,6,7 };
	int arr3[5] = { 1,2 };
	
	int ar1Len, ar2Len, ar3Len, i;

	printf("�迭 arr1�� ũ��: %d \n", sizeof(arr1));
	printf("�迭 arr2�� ũ�� : %d \n", sizeof(arr2));
	printf("�迭 arr3�� ũ�� : %d \n", sizeof(arr3));
	
	ar1Len = sizeof(arr1) / sizeof(int);
	ar2Len = sizeof(arr2) / sizeof(int);
	ar3Len = sizeof(arr3) / sizeof(int); //�迭�� ũ��, ����, size �� �� ����. = �迭�� element. �� �ڵ� ä��������� �� �� ����.

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
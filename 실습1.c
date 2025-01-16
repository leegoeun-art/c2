#include <stdio.h>
#include <string.h>

struct student {
	int number;
	char name[10];
	double grade;
};

int main(void)
{
	struct student s; // s is a student structure variable

	s.number = 20230001;
	strcpy(s.name, "홍길동"); // Use strcpy() for cross-platform compatibility
	s.grade = 4.3;

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %.2f\n", s.grade);

	return 0;
}
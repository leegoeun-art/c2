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
	strcpy(s.name, "È«±æµ¿"); // Use strcpy() for cross-platform compatibility
	s.grade = 4.3;

	printf("ÇÐ¹ø: %d\n", s.number);
	printf("ÀÌ¸§: %s\n", s.name);
	printf("ÇÐÁ¡: %.2f\n", s.grade);

	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("1-45 중 숫자 6개 출력\n");
    printf("rand() : ");

    for (int cnt = 1; cnt <= 6; cnt++)
        printf(" %d ", rand());

    printf("\n");
    printf("rand() %% 45 : ");

    for (int cnt = 1; cnt <= 6; cnt++)
        printf(" %d ", (rand() % 45));

    printf("\n");
    printf("1 + (rand() %% 45) : ");

    for (int cnt = 1; cnt <= 6; cnt++)
        printf(" %d ", 1 + (rand() % 45));

    printf("\n");

    return 0;
}

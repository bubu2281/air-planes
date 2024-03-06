#include "./utils.h"
#define DIM_INFO 13
#define TWO 2
#define FOUR 4
#define FIVE 5
#define SIX 6
#define NINE 9

void SolveTask1(void *info, int nr_avioane) {
    for (int i = 0; i < nr_avioane; i++) {
        short int line = *(short int *)(info + DIM_INFO * i);
        short int column = *(short int *)(info + DIM_INFO * i + TWO);
        char direction = *(char *)(info + DIM_INFO * i + FOUR);
        char type = *(char *)(info + DIM_INFO * i + FIVE);
        char *airport_code = info + DIM_INFO * i + SIX;
        int speed = *(int *)(info + DIM_INFO * i + NINE);
        printf("(%hi, %hi)\n", line, column);
        printf("%c\n", direction);
        printf("%c%c%c%c\n", type, *(airport_code), *(airport_code + 1), *(airport_code + 2));
        printf("%d\n", speed);
        printf("\n");
    }
}

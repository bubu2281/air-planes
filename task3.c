#include "./utils.h"
#define DIM_INFO 13
#define ONE 1
#define TWO 2
#define FOUR 4
#define FIVE 5
#define SIX 6
#define NINE 9

int compare(const void *a, const void *b) {
    if ((*(char *)(a + FIVE) - *(char *)(b + FIVE) == 0)) {
        if ((*(char *)(b + SIX) - *(char *)(a + SIX) == 0 )) {
            if ((*(char *)(b + SIX + ONE) - *(char *)(a + SIX + ONE) == 0)) {
                if ((*(char *)(b + SIX + TWO) - *(char *)(a + SIX + TWO) == 0)) {
                    return *(int *)(a + NINE) - *(int *)(b + NINE);
                } else {
                    return *(char *)(b + SIX + TWO) - *(char *)(a + SIX + TWO);
                }
            } else {
                return *(char *)(b + SIX + ONE) - *(char *)(a + SIX + ONE);
            }
        } else {
            return *(char *)(b + SIX) - *(char *)(a + SIX);
        }
    } else {
        return *(char *)(a + FIVE) - *(char *)(b + FIVE);
    }
}
void SolveTask3(void *info, int nr_avioane) {
    qsort(info, nr_avioane, DIM_INFO, compare);
    SolveTask1(info, nr_avioane);
}

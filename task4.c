#include "./utils.h"
#define ONE 1
#define TWO 2
#define DIM_INFO 13
#define FOUR 4
#define THREE 3
#define FIVE 5

void SolveTask4(void *info, int nr_avioane, int nr_obstacole, int *x, int *y, int N) {
        int index = 0;
        for (int i = 0; i < nr_avioane; i++) {
        short int line = *(short int *)(info + DIM_INFO * i);
        short int column = *(short int *)(info + DIM_INFO * i + TWO);
        char direction = *(char *)(info + DIM_INFO * i + FOUR);
        char type = *(char *)(info + DIM_INFO * i + FIVE);
        switch (type) {
            case '1' : {
                switch (direction) {
                    case 'N' : {
                        int ok = 1;
                        for (int j = 0; j < nr_obstacole; j++) {
                            for (int k = -TWO; k <= TWO; k++) {
                                if ((column+k == *(y+j)) && (*(x+j) < line+1)) {
                                    ok = 0;
                                }
                            }
                            for (int k = -ONE; k <= ONE; k++) {
                                if ((column+k == *(y+j)) && (*(x+j) < line+3)) {
                                    ok = 0;
                                }
                            }
                        }
                        if (ok) index++;
                        break;
                    }
                    case 'S' : {
                        int ok = 1;
                        for (int j = 0; j < nr_obstacole; j++) {
                            for (int k = -TWO; k <= TWO; k++) {
                                if ((column+k == *(y+j)) && (*(x+j) > line-1)) {
                                    ok = 0;
                                }
                            }
                            for (int k = -ONE; k <= ONE; k++) {
                                if ((column+k == *(y+j)) && (*(x+j) > line-3)) {
                                    ok = 0;
                                }
                            }
                        }
                        if (ok) index++;
                        break;
                    }
                    case 'W' : {
                        int ok = 1;
                        for (int j = 0; j < nr_obstacole; j++) {
                            for (int k = -TWO; k <= TWO; k++) {
                                if ((line+k == *(x+j)) && (*(y+j) < column+1)) {
                                    ok = 0;
                                }
                            }
                            for (int k = -ONE; k <= ONE; k++) {
                                if ((line+k == *(x+j)) && (*(y+j) < column+3)) {
                                    ok = 0;
                                }
                            }
                        }
                        if (ok) index++;
                        break;
                    }
                    case 'E' : {
                        int ok = 1;
                        for (int j = 0; j < nr_obstacole; j++) {
                            for (int k = -TWO; k <= TWO; k++) {
                                if ((line+k == *(x+j)) && (*(y+j) > column-1)) {
                                    ok = 0;
                                }
                            }
                            for (int k = -ONE; k <= ONE; k++) {
                                if ((line+k == *(x+j)) && (*(y+j) > column-3)) {
                                    ok = 0;
                                }
                            }
                        }
                        if (ok) index++;
                        break;
                    }
                    default : {
                        break;
                    }
                }
                break;
            }
            case '2' : {
                switch (direction) {
                    case 'N' : {
                        int ok = 1;
                        for (int j = 0; j < nr_obstacole; j++) {
                            for (int k = -THREE; k <= THREE; k++) {
                                if ((column+k == *(y+j)) && (*(x+j) < line+2)) {
                                    ok = 0;
                                }
                            }
                            for (int k = -TWO; k <= TWO; k++) {
                                if ((column+k == *(y+j)) && (*(x+j) < line+4)) {
                                    ok = 0;
                                }
                            }
                        }
                        if (ok) index++;
                        break;
                    }
                    case 'S' : {
                        int ok = 1;
                        for (int j = 0; j < nr_obstacole; j++) {
                            for (int k = -THREE; k <= THREE; k++) {
                                if ((column+k == *(y+j)) && (*(x+j) > line-2)) {
                                    ok = 0;
                                }
                            }
                            for (int k = -TWO; k <= TWO; k++) {
                                if ((column+k == *(y+j)) && (*(x+j) > line-4)) {
                                    ok = 0;
                                }
                            }
                        }
                        if (ok) index++;
                        break;
                    }
                    case 'W' : {
                        int ok = 1;
                        for (int j = 0; j < nr_obstacole; j++) {
                            for (int k = -THREE; k <= THREE; k++) {
                                if ((line+k == *(x+j)) && (*(y+j) < column+2)) {
                                    ok = 0;
                                }
                            }
                            for (int k = -TWO; k <= TWO; k++) {
                                if ((line+k == *(x+j)) && (*(y+j) < column+4)) {
                                    ok = 0;
                                }
                            }
                        }
                        if (ok) index++;
                        break;
                    }
                    case 'E' : {
                        int ok = 1;
                        for (int j = 0; j < nr_obstacole; j++) {
                            for (int k = -THREE; k <= THREE; k++) {
                                if ((line+k == *(x+j)) && (*(y+j)  >column-2)) {
                                    ok = 0;
                                }
                            }
                            for (int k = -TWO; k <= TWO; k++) {
                                if ((line+k == *(x+j)) && (*(y+j) > column-4)) {
                                    ok = 0;
                                }
                            }
                        }
                        if (ok) index++;
                        break;
                    }
                    default : {
                        break;
                    }
                }
                break;
            }
            default : {
                break;
            }
        }
    }
    printf("%d", index);
}

#include "./utils.h"
#define DIM_INFO 13
#define ONE 1
#define TWO 2
#define THREE 3
#define FOUR 4
#define FIVE 5
#define SIX 6
#define NINE 9

void SolveTask5(void *info, int nr_avioane, int T, int nr_pct_coord, int *X, int *Y, int N) {
    for (int i = 0; i <= T; i++) {
        int count = 0;
        for (int j = 0; j < nr_avioane; j++) {
            short int line = *(short int *)(info + DIM_INFO * j);
            short int column = *(short int *)(info + DIM_INFO * j + TWO);
            char direction = *(char *)(info + DIM_INFO * j + FOUR);
            char type = *(char *)(info + DIM_INFO * j + FIVE);
            int speed = *(int *)(info + DIM_INFO * j + NINE);
            int ok = 0;
            for (int k = 0; k < nr_pct_coord && ok == 0; k++) {
                switch (type) {
                    case '1' : {
                        switch (direction) {
                            case 'N' : {
                                if ( (line-(speed*i) == X[k]) && (column == Y[k]) ) {ok = 1; break;}
                                for (int p = -TWO; p <= TWO; p++) {
                                    if ( (line-(speed*i)+1 == X[k]) && (column+p == Y[k]) ) {ok = 1; break;}
                                }
                                if ( (line-(speed*i)+2 == X[k]) && (column == Y[k]) ) {ok = 1; break;}
                                for (int p = -ONE; p <= ONE; p++) {
                                    if ( (line-(speed*i)+3 == X[k]) && (column+p == Y[k]) ) {ok = 1; break;}
                                }
                                break;
                            }
                            case 'S' : {
                                if ( (line+(speed*i) == X[k]) && (column == Y[k]) ) {ok = 1; break;}
                                for (int p = -TWO; p <= TWO; p++) {
                                    if ( (line+(speed*i)-1 == X[k]) && (column+p == Y[k]) ) {ok = 1; break;}
                                }
                                if ( (line+(speed*i)-2 == X[k]) && (column == Y[k]) ) {ok = 1; break;}
                                for (int p = -ONE; p <= ONE; p++) {
                                    if ( (line+(speed*i)-3 == X[k]) && (column+p == Y[k]) ) {ok = 1; break;}
                                }
                                break;
                            }
                            case 'W' : {
                                if ( (column-(speed*i) == Y[k]) && (line == X[k]) ) {ok = 1; break;}
                                for (int p = -TWO; p <= TWO; p++) {
                                    if ( (column-(speed*i)+1 == Y[k]) && (line+p == X[k]) ) {ok = 1; break;}
                                }
                                if ( (column-(speed*i)+2 == Y[k]) && (line == X[k]) ) {ok = 1; break;}
                                for (int p = -ONE; p <= ONE; p++) {
                                    if ( (column-(speed*i)+3 == Y[k]) && (line+p == X[k]) ) {ok = 1; break;}
                                }
                                break;
                            }
                            case 'E' : {
                                if ( (column+(speed*i) == Y[k]) && (line == X[k]) ) {ok = 1; break;}
                                for (int p = -TWO; p <= TWO; p++) {
                                    if ( (column+(speed*i)-1 == Y[k]) && (line+p == X[k]) ) {ok = 1; break;}
                                }
                                if ( (column+(speed*i)-2 == Y[k]) && (line == X[k]) ) {ok = 1; break;}
                                for (int p = -ONE; p <= ONE; p++) {
                                    if ( (column+(speed*i)-3 == Y[k]) && (line+p == X[k]) ) {ok = 1; break;}
                                }
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
                                if ( (line-(speed*i) == X[k]) && (column == Y[k]) ) {ok = 1; break;}
                                for (int p = -ONE; p <= ONE; p++) {
                                    if ( (line-(speed*i)+1 == X[k]) && (column+p == Y[k]) ) {ok = 1; break;}
                                }
                                for (int p = -THREE; p <= THREE; p++) {
                                   if ( (line-(speed*i)+2 == X[k]) && (column+p == Y[k]) ) {ok = 1; break;}
                                }
                                if ( (line-(speed*i)+3 == X[k]) && (column == Y[k]) ) {ok = 1; break;}
                                for (int p = -TWO; p <= TWO; p++) {
                                    if ( (line-(speed*i)+4 == X[k]) && (column+p == Y[k]) ) {ok = 1; break;}
                                }
                                break;
                            }
                            case 'S' : {
                                if ( (line+(speed*i) == X[k]) && (column == Y[k]) ) {ok = 1; break;}
                                for (int p = -ONE; p <= ONE; p++) {
                                    if ( (line+(speed*i)-1 == X[k]) && (column+p == Y[k]) ) {ok = 1; break;}
                                }
                                for (int p = -THREE; p <= THREE; p++) {
                                   if ( (line+(speed*i)-2 == X[k]) && (column+p == Y[k]) ) {ok = 1; break;}
                                }
                                if ( (line+(speed*i)-3 == X[k]) && (column == Y[k]) ) {ok = 1; break;}
                                for (int p = -TWO; p <= TWO; p++) {
                                    if ( (line+(speed*i)-4 == X[k]) && (column+p == Y[k]) ) {ok = 1; break;}
                                }
                                break;
                            }
                            case 'W' : {
                                if ( (column-(speed*i) == Y[k]) && (line == X[k]) ) {ok = 1; break;}
                                for (int p = -ONE; p <= ONE; p++) {
                                    if ( (column-(speed*i)+1 == Y[k]) && (line+p == X[k]) ) {ok = 1; break;}
                                }
                                for (int p = -THREE; p <= THREE; p++) {
                                   if ( (column-(speed*i)+2 == Y[k]) && (line+p == X[k]) ) {ok = 1; break;}
                                }
                                if ( (column-(speed*i)+3 == Y[k]) && (line == X[k]) ) {ok = 1; break;}
                                for (int p = -TWO; p <= TWO; p++) {
                                    if ( (column-(speed*i)+4 == Y[k]) && (line+p == X[k]) ) {ok = 1; break;}
                                }
                                break;
                            }
                            case 'E' : {
                                if ( (column+(speed*i) == Y[k]) && (line == X[k]) ) {ok = 1; break;}
                                for (int p = -ONE; p <= ONE; p++) {
                                    if ( (column+(speed*i)-1 == Y[k]) && (line+p == X[k]) ) {ok = 1; break;}
                                }
                                for (int p = -THREE; p <= THREE; p++) {
                                   if ( (column+(speed*i)-2 == Y[k]) && (line+p == X[k]) ) {ok = 1; break;}
                                }
                                if ( (column+(speed*i)-3 == Y[k]) && (line == X[k]) ) {ok = 1; break;}
                                for (int p = -TWO; p <= TWO; p++) {
                                    if ( (column+(speed*i)-4 == Y[k]) && (line+p == X[k]) ) {ok = 1; break;}
                                }
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
            if (ok) count++;
        }
        printf("%d: %d\n", i, count);
    }
}

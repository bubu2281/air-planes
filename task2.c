#include "./utils.h"
#define DIM_INFO 13
#define ONE 1
#define TWO 2
#define THREE 3
#define FOUR 4
#define FIVE 5
#define SIX 6
#define NINE 9
void SolveTask2(void *info, int nr_avioane, int N, char **mat) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            mat[i][j] = '.';
        }
    }
    for (int i = 0; i < nr_avioane; i++) {
        short int line = *(short int *)(info + DIM_INFO * i);
        short int column = *(short int *)(info + DIM_INFO * i + TWO);
        char direction = *(char *)(info + DIM_INFO * i + FOUR);
        char type = *(char *)(info + DIM_INFO * i + FIVE);
        char *airport_code = info + DIM_INFO * i + SIX;
        int speed = *(int *)(info + DIM_INFO * i + NINE);
        switch (type) {
            case '1' : {
                switch (direction) {
                    case 'N' : {
                        mat[line][column] = '*';
                        for (int k = -TWO; k <=TWO; k++) {mat[line+ONE][column+k] = '*';}
                        mat[line+TWO][column] = '*';
                        for (int k = -ONE; k <= ONE; k++) {mat[line+THREE][column+k] = '*';}
                        break;
                    }
                    case 'S' : {
                        mat[line][column] = '*';
                        for (int k = -TWO; k <=TWO; k++) {mat[line-ONE][column+k] = '*';}
                        mat[line-TWO][column] = '*';
                        for (int k = -ONE; k <= ONE; k++) {mat[line-THREE][column+k] = '*';}
                        break;
                    }
                    case 'W' : {
                        mat[line][column] = '*';
                        for (int k = -TWO; k <=TWO; k++) {mat[line+k][column+ONE] = '*';}
                        mat[line][column+TWO] = '*';
                        for (int k = -ONE; k <= ONE; k++) {mat[line+k][column+THREE] = '*';}
                        break;
                    }
                    case 'E' : {
                        mat[line][column] = '*';
                        for (int k = -TWO; k <=TWO; k++) {mat[line+k][column-ONE] = '*';}
                        mat[line][column-TWO] = '*';
                        for (int k = -ONE; k <= ONE; k++) {mat[line+k][column-THREE] = '*';}
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
                        mat[line][column] = '*';
                        for (int k = -ONE; k <= ONE; k++) {mat[line+ONE][column+k] = '*';}
                        for (int k = -THREE; k <= THREE; k++) {mat[line+TWO][column+k] = '*';}
                        mat[line+THREE][column] = '*';
                        for (int k = -TWO; k <= TWO; k++) {mat[line+FOUR][column+k] = '*';}
                        break;
                    }
                    case 'S' : {
                        mat[line][column] = '*';
                        for (int k = -ONE; k <= ONE; k++) {mat[line-ONE][column+k] = '*';}
                        for (int k = -THREE; k <= THREE; k++) {mat[line-TWO][column+k] = '*';}
                        mat[line-THREE][column] = '*';
                        for (int k = -TWO; k <= TWO; k++) {mat[line-FOUR][column+k] = '*';}
                        break;
                    }
                    case 'W' : {
                        mat[line][column] = '*';
                        for (int k = -ONE; k <= ONE; k++) {mat[line+k][column+ONE] = '*';}
                        for (int k = -THREE; k <= THREE; k++) {mat[line+k][column+TWO] = '*';}
                        mat[line][column+THREE] = '*';
                        for (int k = -TWO; k <= TWO; k++) {mat[line+k][column+FOUR] = '*';}
                        break;
                    }
                    case 'E' : {
                        mat[line][column] = '*';
                        for (int k = -ONE; k <= ONE; k++) {mat[line+k][column-ONE] = '*';}
                        for (int k = -THREE; k <= THREE; k++) {mat[line+k][column-TWO] = '*';}
                        mat[line][column-THREE] = '*';
                        for (int k = -TWO; k <= TWO; k++) {mat[line+k][column-FOUR] = '*';}
                        break;
                    }
                    default : {
                        break;
                    }
                }
                break;
            }
            default :
                break;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c", mat[i][j]);
        }
        printf("\n");
    }
}

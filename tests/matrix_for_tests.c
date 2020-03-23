//
// Created by margot on 22.03.2020.
//

#include "../includes/header.h"

extern my_struct global_struct;

void filling_matrix_for_test(int ***A, int N, int generetion)
{
    if (generetion == 0)
    {
        int x = 1;
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < N; j++) {
                (*A)[i][j] = x;
                x += 1;
            }
        }
    }
    else if (generetion == 1)
    {
        int x = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                (*A)[i][j] = x;
            }
        }
    }
    else if (generetion == 2)
    {
        int x = 0;
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < N; j++) {
                (*A)[i][j] = x;
                x -= 1;
            }
        }
    }
    else if (generetion == 3)
    {
        int x = 1;
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < N; j++) {
                (*A)[i][j] = x;
//			x += 1;
            }
        }
    }
}



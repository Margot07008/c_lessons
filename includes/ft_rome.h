//
// Created by Margot on 02.03.2020.
//

#ifndef DZ1_FT_ROME_H
#define DZ1_FT_ROME_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define    NUMS    13

int check_num(float num);
void count_len(unsigned int num, int*len);
int add_len(int count);
char *convert_into_rum(unsigned int num, int len);

void test();
char* ft_main(int need_test, int *len, float test_val);
#include <assert.h>

#endif //DZ1_FT_ROME_H

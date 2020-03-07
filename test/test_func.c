//
// Created by Margot on 02.03.2020.
//

#include "../includes/ft_rome.h"


void test()
{
	int size = 10;
	float tests[]={15, 987, 100, 99, 3999, 174, 1, 5.0, 3333, 10};
    char *answ[]={"XV", "CMLXXXVII", "C", "XCIX", "MMMCMXCIX","CLXXIV", "I","V", "MMMCCCXXXIII", "X"};
    int len_answ[]={2,9, 1, 4, 9, 6, 1, 1, 12, 1};

    float wrong_tests[]={-15, 0, 4000, 5.2, -7.008, 8008, 1234567, -0, 0.0, -1};


    //roman правильно переводит из десятичной системы счисления в римскую
	for (int i=0; i< size; i++)
    {
        int len = 0;
        char *str = NULL;
	    assert(strcmp(str = ft_main(1, &len, tests[i]), answ[i]) == 0);
	    free(str);
    }
    //roman правильно реагирует на некорректные значения
    for (int i=0; i< size; i++)
    {
        int len = 0;
        assert(strcmp(ft_main(1, &len, wrong_tests[i]), "WRONG_NUMBER") == 0);
    }

    //проверка на длину корректной выходной строки
    for (int i=0; i < size; i++)
    {
        char *str;
        int len = 0;
        str = ft_main(1, &len, tests[i]);
        free(str);
        assert(len == len_answ[i]);
    }

    //проверка на длину некорректной выходной строки
    for (int i=0; i<size; i++)
    {
        int len = 0;
        ft_main(1, &len, wrong_tests[i]);
        assert(len == 0);
    }

	printf("ok!\n");
}
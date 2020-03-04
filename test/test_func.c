//
// Created by Margot on 02.03.2020.
//

#include "../includes/ft_rome.h"


void test()
{
	int len = 0;
	char *str;

	//roman правильно переводит из десятичной системы счисления в римскую
	assert(strcmp(str = ft_main(1, &len, 15), "XV") == 0);
	free(str);
	assert(strcmp(str = ft_main(1, &len, 987), "CMLXXXVII") == 0);
    free(str);
	assert(strcmp(str = ft_main(1, &len, 100), "C") == 0);
    free(str);
	assert(strcmp(str = ft_main(1, &len, 99), "XCIX") == 0);
    free(str);
	assert(strcmp(str = ft_main(1, &len, 3999), "MMMCMXCIX") == 0);
    free(str);
	assert(strcmp(str = ft_main(1, &len, 174), "CLXXIV") == 0);
    free(str);
	assert(strcmp(str = ft_main(1, &len, 1), "I") == 0);
    free(str);
	assert(strcmp(str = ft_main(1, &len, 5.0), "V") == 0);
    free(str);
	assert(strcmp(str = ft_main(1, &len, 3333), "MMMCCCXXXIII") == 0);
    free(str);

	//roman правильно реагирует на некорректные значения
	assert(strcmp(ft_main(1, &len, -15), "WRONG_NUMBER") == 0);
	assert(strcmp(ft_main(1, &len, 0), "WRONG_NUMBER") == 0);
	assert(strcmp(ft_main(1, &len, 4000), "WRONG_NUMBER") == 0);
	assert(strcmp(ft_main(1, &len, 5.2), "WRONG_NUMBER") == 0);
	assert(strcmp(ft_main(1, &len, -7.008), "WRONG_NUMBER") == 0);
	assert(strcmp(ft_main(1, &len, 8008), "WRONG_NUMBER") == 0);
//	assert(strcmp(ft_main(1, &len, "dgdgdr"), "WRONG_NUMBER") == 0);
//	assert(strcmp(ft_main(1, &len, "487"), "WRONG_NUMBER") == 0);

    //проверка на длину корректной выходной строки
    ft_main(1, &len, 3333);
    free(str);
    assert(len == 12);
    ft_main(1, &len, 1);
    free(str);
    assert(len == 1);

    //проверка на длину некорректной выходной строки
    ft_main(1, &len, 5000);
    assert(len == 0);
    ft_main(1, &len, -18);
    assert(len == 0);

	printf("ok!\n");
}
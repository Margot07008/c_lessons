//
// Created by Margot on 02.03.2020.
//
#include "../includes/ft_rome.h"

char *convert_into_rum(unsigned int num, int len)
{
	char *str_rum;
	int p = NUMS;

	unsigned int a_num[NUMS] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
	char* r_str[NUMS] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};

	if (!(str_rum = (char*)malloc(sizeof(char)*(len + 1))))
		return (NULL);
	*str_rum = '\0';

	while (p--)
		while (num >= a_num[p])
		{
			num -= (a_num[p]);
			if (!strcat( str_rum, r_str[p]))
				return (NULL);
		}
	str_rum[len] = '\0';
	return (str_rum);
}

int check_num(float num)
{
	if (((float) ((int) num ) == num)&&(num > 0 && num < 4000))
		return (1);
	else
		return (0);
}

void count_len(unsigned int num, int*len)
{
	int divider = 1000;

	while (num)
	{
		(*len) += add_len(num/divider);
		num %= divider;
		divider /= 10;
	}
}

int add_len(int count)
{
	if (count == 1 || count == 5)
		return (1);
	else if (count == 2 || count == 4 || count == 6 || count == 9)
		return (2);
	else if (count == 3 || count == 7 )
		return (3);
	else if (count == 8)
		return (4);
	else
		return (0);
}

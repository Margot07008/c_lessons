//
// Created by margot on 07.03.2020.
//

#include "../includes/ft_rome.h"

char* ft_main(float num, int (*len));

int main()
{
    char *str;
    int len = 0;
    float num = 0;

    printf("Enter number:");
    scanf("%f", &num);
    str = ft_main(num, &len);
    printf("len= %d - %s\n", len, str);
    if (need_to_clear(str))
        free(str);

    return (0);
}

char* ft_main(float num, int (*len))
{
    char *str = NULL;

    if (!check_num(num)) {
        return("WRONG_NUMBER");
    }
    count_len((int)num, len);
    if (!(str = convert_into_rum((int)num, *len))) {
        return("MEM_ALLOC_ERR");
    }
    return (str);
}
//
// Created by margot on 07.03.2020.
//


#include "../includes/ft_rome.h"

int main()
{

    char *str;
    int len = 0;

    str = ft_main(0, &len, 0);
    printf("len= %d - %s\n", len, str);
    if (strcmp(str, "WRONG_NUMBER") && strcmp(str, "MEM_ALLOC_ERR"))
        free(str);

    return (0);
}

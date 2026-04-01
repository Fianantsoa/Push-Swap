#include "push_swap.h"

char *ft_argv_str(char *argv[], int size)
{
    int     i;
    char    *arg_to_str;
    char    *temp;

    i = 0;
    arg_to_str = (char *) malloc(sizeof(char) * ((size * 2) - 1));
    arg_to_str = "";
    while (++i < size + 1)
    {
        temp = arg_to_str;
        arg_to_str = ft_strjoin(temp, argv[i]);
        free(temp);
        if (argv[i + 1])
        {
            temp = arg_to_str;
            arg_to_str = ft_strjoin(temp, (char *) " ");
            free(temp);
        }
    }
    return (arg_to_str);
}

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char a = 'a';
    printf("%i ", ft_isdigit(a));
    printf("%i ", isdigit(a));
    printf("%i ", ft_isdigit('0'));
    printf("%i ", isdigit('0'));
    printf("%i ", ft_isdigit('\''));
    printf("%i ", isdigit('\''));
    printf("%i ", ft_isdigit(' '));
    printf("%i ", isdigit(' '));
    printf("%i ", ft_isdigit('12'));
    printf("%i ", isdigit('12'));
}

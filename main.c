#include "libft.h"

int main(int argc, char const *argv[])
{
	char src[50] = "Hello testing 123.. ";
	char dest[50];
	memmove(src+2, src+5, 30);
	printf("Original function: %s\n", src);
	char src2[50] = "Hello testing 123.. ";
	ft_memcpy(src+2,src2+5, 30);
	printf("My function: %s\n",src);
}



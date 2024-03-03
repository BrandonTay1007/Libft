#include "libft.h"

int main(int argc, char const *argv[])
{
	char str[] = "foo-bar";
	char dest[5];
	puts(str);
	memcpy(dest, &str[3], 6);
	puts(str);
	char str2[] = "foo-bar";
	memmove(&str2[3], &str2[3], 4);
	puts(str2);
}



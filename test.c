# include "libft.h"
int main()
{
	int fd = open("text.txt", O_RDONLY);
	char	*a;
	int	i = 0;
	while (i < 5)
	{
		a = get_next_line(fd);
		printf("[%i]%s\n", i, a);
		free(a);
		i++;
	}
	return 0;
}

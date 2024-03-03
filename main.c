#include "libft.h"

int main()
{
	int src[] = {0,2,3,4,5};
	int dest[5];
	ft_memcpy(dest, src, 5 * sizeof(int));

	
	int	i = 0;
	while (i < 6)
	{
		printf("%i", dest[i]);
		i++;
	}
}
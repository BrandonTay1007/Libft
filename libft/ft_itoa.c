/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 12:54:13 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/09 16:37:40 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*recur(unsigned int nb, char *str, int is_neg)
{	
	if (nb < 10)
	{
		if (is_neg)
		{
			*str = '-';
			str++;
		}
		*str = nb + '0';
		str++;
	}
	else
	{
		str = recur(nb / 10, str, is_neg);
		str = recur(nb % 10, str, 0);
	}
	return (str);
}

int	get_size(unsigned int n)
{
	int	size;

	size = 0;
	while (n != 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}
char	*ft_itoa(int n)
{
	size_t			size;
	char 			*str;
	int	is_neg;
	unsigned int	nb;

	is_neg = 0;
	size = get_size(n);
	if (n < 0)
	{
		size++;
		nb = (unsigned int) (n * -1);
		is_neg = 1;
	}
	else
		nb = n;
	str = malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	recur(nb, str, is_neg);
	(str[size + 1]) = '\0';
	return (str);
}

/* int main(int argc, char const *argv[])
{
	char *a = ft_itoa(-1);
	printf("%s",a);
} */

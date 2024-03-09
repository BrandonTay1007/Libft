/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 12:54:13 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/09 13:12:40 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	recur(int n)
{
	char	c;
	if (n < 10)
		c = n + '0';
	else
	{
		recur(n / 10);
		recur(n % 10);
	}
	return (c);
}

char	*ft_itoa(int n)
{
	size_t	size;
	char 	*str;

	size = 0;
	if (n < 0)
		n = (unsigned int)(n * -1);
	while (n / 10 != 0)
	{
		size++;
		n = n / 10;
	}
	printf("%i", size);
	str = malloc (size + 1)
	return (NULL);
}

int main(int argc, char const *argv[])
{
	ft_itoa(1233);
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:03:19 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/03 15:41:49 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	const char	*s;

	s = src;
	d = dest;
	if (d && s)
	{
		while (n--)
		{
			*d = *s;
			d++;
			s++;
		}
	}
	return (dest);
}

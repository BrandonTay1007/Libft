/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:03:19 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/03 12:00:41 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ptrdest;
	const char	*ptrsrc;

	ptrsrc = src;
	ptrdest = dest;
	while (n--)
	{
		*ptrdest = *ptrsrc;
		ptrdest++;
		ptrsrc++;
	}
	return (dest);
}

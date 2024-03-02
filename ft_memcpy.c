/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:03:19 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/02 21:51:02 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ptrdest;
	char	*ptrsrc;

	ptrsrc = (void *)src;
	ptrdest = dest;
	while (n-- > 0)
	{
		*ptrdest = *ptrsrc;
		ptrdest++;
		ptrsrc++;
	}
	return (dest);
}

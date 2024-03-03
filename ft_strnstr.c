/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 18:59:45 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/03 19:15:21 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_needle(const char *hay, const char* needle)
{
	while(*needle)
	{
		if (*hay != *needle)
			return (0);
		hay++;
		needle++;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len-- > 0)
	{
		if (*haystack == *needle)
			if (check_needle(haystack, needle))
				return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
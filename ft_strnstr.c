/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 18:59:45 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/07 11:08:01 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[0])
		{
			while (haystack[i + j] == needle[j] && (i + j) < len)
			{
				if(!needle[j + 1])
					return ((char *)haystack + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

/* int main(int argc, char const *argv[])
{
	char *hay = "helloworld";
	char *need = "wo";
	size_t size = 6;
	char *a = ft_strnstr(hay, need, size);
	char *b = strnstr(hay, need, size);
	puts(a);
	puts(b);
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:06:33 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/12 16:42:35 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countword(char const *src, char c)
{
	int	i;
	int	ans;

	i = 0;
	ans = 0;
	while (src[i])
	{
		if (src[i] != c && src[i])
		{
			ans++;
			while (src[i] != c && src[i])
				i++;
		}
		else
			i++;
	}
	return (ans);
}

char	**ft_split(char const *src, char c)
{
	char	**arr;
	size_t	c_c;
	size_t	arr_i;

	arr_i = 0;
	arr = malloc((countword(src, c) + 1) * sizeof (char **));
	if (!arr || !src)
		return (NULL);
	while (*src)
	{
		if (*src != c)
		{
			c_c = 0;
			while (*(src + c_c) != c && *(src + c_c))
				c_c++;
			arr[arr_i] = malloc(c_c + 1);
			ft_strlcpy(arr[arr_i], (char *)(src), c_c + 1);
			src += c_c;
			arr_i++;
		}
		else
			src++;
	}
	arr[arr_i] = NULL;
	return (arr);
}

/* int main(int argc, char const *argv[])
{
	char *str = "      split       this for   me  !       ";
	char	sep = ' ';
	char **ans = ft_split(str, ' ');
	int	i = 0;
	while (ans[i])
	{
		puts(ans[i]);
		i++;
	}
} */

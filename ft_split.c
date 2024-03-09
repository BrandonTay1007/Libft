/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:06:33 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/09 10:18:42 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countword(char const *src, char c)
{
	int	i;
	int	ans;

	i = 0;
	ans = 0;	
	while (src[i])
	{
		if (src[i] != c)
		{
			ans++;
			while (src[i] != c)
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
	size_t	i;
	size_t	char_count;
	int	arr_i;

	i = 0;
	arr_i = -1;
	arr = malloc(countword(src, c) + 1);

	while (src[i])
	{
		if (src[i] != c)
		{
			char_count = 0;
			while (src[i + char_count] != c)
				char_count++;
			arr[++arr_i] = malloc(char_count + 1);
			ft_strlcpy(arr[arr_i], (char *)(src + i), char_count + 1);
			i += char_count;
		}
		else
			i++;
	}
	arr[arr_i + 1] = NULL;
	return (arr);
}

int main(int argc, char const *argv[])
{
	char *str = "Hello";
	char	sep = ' ';
	char **arr = ft_split(str, sep);
	while (*arr)
	{
		puts(*arr);
		arr++;
	}
	puts(arr[0]);
}

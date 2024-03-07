/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twei-yo- <twei-yo-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:06:33 by twei-yo-          #+#    #+#             */
/*   Updated: 2024/03/07 18:29:28 by twei-yo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countword(char const *s, char c)
{
	int	i;
	int	ans;
	int	count;

	i = 0;
	ans = 0;
	count = 0;
	
	while (s[i])
	{
		if (s[i] != c)
			ans++;
	}
	return (ans);
}

char	**ft_split(char const *s, char c)
{
	char	*arr;
	int	i;

	i = 0;
	arr = malloc(countword(s, c) + 1);
		
		
		
}

int main(int argc, char const *argv[])
{
	char *str = "  Hello World Hello   ";
	printf("%i", countword(str, ' '));
}
